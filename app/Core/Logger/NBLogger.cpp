/*
	*
	* NBLogger.cpp - Some tools for NewBreeze
	*
*/

#include <NBLogger.hpp>

#if QT_VERSION >= 0x050000
	void NBMessageOutput5( QtMsgType type, const QMessageLogContext &context, const QString &message ) {

		Q_UNUSED( context );

		/* If we are unable to open a log file, write to /dev/null */
		if ( not nblog )
			nblog = fopen( "/dev/null", "w" );

		switch ( type ) {
			case QtDebugMsg: {
				fprintf( nblog, "NewBreeze::Debug# %s\n", message.toLocal8Bit().data() );
				fflush( nblog );
				fprintf( stderr, "\033[01;30mNewBreeze::Debug# %s\n\033[00;00m", message.toLocal8Bit().data() );
				break;
			}

			case QtWarningMsg: {
				fprintf( nblog, "NewBreeze::Warning# %s\n", message.toLocal8Bit().data() );
				fflush( nblog );
				if ( QString( message ).contains( "X Error" ) or QString( message ).contains( "libpng warning" ) )
					break;
				fprintf( stderr, "\033[01;33mNewBreeze::Warning# %s\n\033[00;00m", message.toLocal8Bit().data() );
				break;
			}

			case QtCriticalMsg: {
				fprintf( nblog, "NewBreeze::CriticalError# %s\n", message.toLocal8Bit().data() );
				fflush( nblog );
				fprintf( stderr, "\033[01;31mNewBreeze::CriticalError# %s\n\033[00;00m", message.toLocal8Bit().data() );
				break;
			}

			case QtFatalMsg: {
				fprintf( nblog, "NewBreeze::FatalError# %s\n", message.toLocal8Bit().data() );
				fflush( nblog );
				fprintf( stderr, "\033[01;41mNewBreeze::FatalError# %s\n\033[00;00m", message.toLocal8Bit().data() );
				abort();
			}
		}
	};
#else
	void NBMessageOutput( QtMsgType type, const char* message ) {

		/* If we are unable to open a log file, write to /dev/null */
		if ( not nblog )
			nblog = fopen( "/dev/null", "w" );

		switch ( type ) {

			case QtDebugMsg: {
				fprintf( nblog, "NewBreeze::Debug# %s\n", message );
				fflush( nblog );
				fprintf( stderr, "\033[01;30mNewBreeze::Debug# %s\n\033[00;00m", message );
				break;
			}

			case QtWarningMsg: {
				fprintf( nblog, "NewBreeze::Warning# %s\n", message );
				fflush( nblog );
				if ( QString( message ).contains( "X Error" ) or QString( message ).contains( "libpng warning" )  )
					break;
				fprintf( stderr, "\033[01;33mNewBreeze::Warning# %s\n\033[00;00m", message );
				break;
			}

			case QtCriticalMsg: {
				fprintf( nblog, "NewBreeze::CriticalError# %s\n", message );
				fflush( nblog );
				fprintf( stderr, "\033[01;31mNewBreeze::CriticalError# %s\n\033[00;00m", message );
				break;
			}

			case QtFatalMsg: {
				fprintf( nblog, "NewBreeze::FatalError# %s\n", message );
				fflush( nblog );
				fprintf( stderr, "\033[01;41mNewBreeze::FatalError# %s\n\033[00;00m", message );
				abort();
			}
		}
	};
#endif
