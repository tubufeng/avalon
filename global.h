/*!
 * \file
 * \brief Заголовочный файл для глобальных настроек
 */

#ifndef _avalon_global_h_
#define _avalon_global_h_

#include "model/user.h"

/*!
 * \brief Глобальные настройки
 */
class AGlobal
{
	private:

		AGlobal ();

	public:

		/*!
		 * \brief Стандартный singleton
		 */
		static AGlobal* getInstance ();

		~AGlobal ();

		/*!
		 * \brief Перезагрузка настроек
		 */
		void reload ();

		//
		// Общие переменные
		//

		AUserInfo Me;          /*!< \brief Текущий пользователь avalon */
#ifdef AVALON_USE_ZLIB
		bool      Compression; /*!< \brief Сжатие тел сообщений        */
#endif

		//
		// Константы форматирования
		//

		QString AnonymousName; /*!< \brief Отображаемое имя анонима */
		QString DateFormat;    /*!< \brief Формат даты/времени      */

		/*!
		 * \brief Список временных файлов для работы (пока только для файлов graphviz)
		 */
		QList<QTemporaryFile*> TempFileList;

		/*!
		 * \brief Очистка (удаление) временных файлов
		 */
		void clearTempList ();
};

#endif   // _avalon_global_h_
