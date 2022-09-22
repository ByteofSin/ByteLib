/** Title: Severity
 *	@version: v0.0.0.1
 *	@author: ByteofSin
 *	Contacts: 
 *		Email: ByteofSin@gmail.com 
 *	Created: 09/22/2022 
 *	Modified: 09/22/2022
 *	@brief: Enumerator for various severity levels
 *	Externals: 
 *	@bug: none yet
 */

#ifndef BYTEOFSIN_LOGGING_SEVERITY_H
#define BYTEOFSIN_LOGGING_SEVERITY_H


namespace byteofsin::logging {
    #define stringify (name) # name


    enum class Severity {
        Debug           = 0,
        Info            = 1,
        Warning         = 2,
        Critical        = 3,
        Fatal           = 4,
    };

    constexpr const char* SeverityToString(Severity givenSeverity){
        switch(givenSeverity){
            case Severity::Debug: return "Debug(0): ";
            case Severity::Info: return "Info(1): ";
            case Severity::Warning: return "Warning(2): ";
            case Severity::Critical: return "Critical(3): ";
            case Severity::Fatal: return "Fatal(4): ";
            default: return "Severity Not Given (-1): ";
        };
    };
};

#endif