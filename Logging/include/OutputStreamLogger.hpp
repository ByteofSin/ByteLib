/** Title: Output Stream Logger
 *	@version: v0.0.0.1
 *	@author: ByteofSin
 *	Contacts: 
 *		Email: ByteofSin@gmail.com 
 *	Created: 09/22/2022 
 *	Modified: 09/22/2022
 *	@brief: A logger setup to use the default stdout
 *	Externals: 
 *	@bug: none yet
 */

#ifndef BYTEOFSIN_LOGGING_OUTPUT_STREAM_H
#define BYTEOFSIN_LOGGING_OUTPUT_STREAM_H


#include "iLogger.h"
#include "Severity.h"

#include <ostream>

namespace byteofsin::logging {
    template <typename CharT, typename Traits = std::char_traits<CharT>>
    class OutputStreamLogger : public iLogger {
        public:
            // OutputStreamLogger(/* std::basic_ostream<charType, streamTraits>& stream */) {

            OutputStreamLogger(std::basic_ostream<CharT, Traits> & outputStream) : Stream{outputStream} { 
            };

            iLogger& operator << (Severity inputSeverity) override { 
                Stream << SeverityToString(inputSeverity);
                return *this;
            }

            iLogger& operator << (std::string const& message) override {
                Stream << message;
                return *this;
            }

            iLogger& operator << (bytelog::EndLine) override {
                Stream << std::endl;
                return *this;
            }

            iLogger& operator << (bytelog::Flush) override {
                Stream << std::flush;
                return *this;
            }

        private:
            std::basic_ostream<CharT, Traits>& Stream;
    };
};

#endif