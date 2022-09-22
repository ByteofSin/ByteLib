/** Title: Reciever
 *	@version: v0.0.0.1
 *	@author: ByteofSin
 *	Contacts: 
 *		Email: ByteofSin@gmail.com 
 *	Created: 09/22/2022 
 *	Modified: 09/22/2022
 *	@brief: An Interface for Message Recievers
 *	Externals: 
 *	@bug: none yet
 */

#ifndef BYTEOFSIN_MESSAGING_RECIEVER_H
#define BYTEOFSIN_MESSAGING_RECIEVER_H

#include <functional>
#include <iostream>

#include "./Messaging/Router.h"
#include "./Messaging/Message.h"

namespace byteofsin::messaging {
    class Reciever {
        public:
            Reciever(Router* messageRouter){
                this->messageRouter = messageRouter;
                this->messageRouter->AddReciever(this->recieveMessage());
            }

            virtual void update(){};

        protected:
            byteofsin::messaging::Router* messageRouter;

            std::function<void (Message)> recieveMessage() {
                auto messageListener = [this](Message message) -> void  {
                    this->OnMessageRecieved(message);
                };

                return messageListener;
            }

            void Send(Message message){
                this->messageRouter->AddMessage(message);
            }

            virtual void OnMessageRecieved(Message message){
                std::cout << "message recieved" << std::endl;
            }
    };
};

#endif