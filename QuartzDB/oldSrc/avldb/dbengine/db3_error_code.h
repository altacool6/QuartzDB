#ifndef __DB3_ERROR_CODE_H__
#define __DB3_ERROR_CODE_H__

	#define DB_SHOW_ERROR_CODE 0

	enum 
	{
		DB_ERROR_NO_ERROR,
		DB_ERROR_DATABASE_DO_NOT_RUNNING,
		DB_ERROR_PARAMETER_INCORRECT,
		DB_ERROR_DBAPIALLOCKEY_FUNCTION_DBFILETYPE_PARAMETER_INCORRECT,
		DB_ERROR_DBAPISEARCHMS_FUNCTION_CONDITION_PARAMETER_INCORRECT,
		DB_ERROR_DBAPISEARCHMS_FUNCTION_TABLE_NOT_FOUND,
		DB_ERROR_TABLE_NAME_ALREADY_EXIST,
		DB_ERROR_TABLE_ALLOC_PAGE_NONE,
		DB_ERROR_COLUMN_NAME_ALREADY_EXIST,
		DB_ERROR_TABLE_NOT_FOUND,
		DB_ERROR_COLUMN_NOT_FOUND,
		DB_ERROR_INDIAN_INCORRECT,
		DB_ERROR_ALREADY_RUNNING,
		DB_ERROR_DICTIONARY_FILE_CREATE_FAILED,
		DB_ERROR_DATA_FILE_CREATE_FAILED,
		DB_ERROR_INDEX_FILE_CREATE_FAILED,
		DB_ERROR_DICTIONARY_FILE_TRUNCATE_FAILED,
		DB_ERROR_DATA_FILE_TRUNCATE_FAILED,
		DB_ERROR_INDEX_FILE_TRUNCATE_FAILED,
		DB_ERROR_DICTIONARY_FILE_CRASH,
		DB_ERROR_DICTIONARY_FILE_CRASH_DICTIONARY_HEADER_SIZE_VERY_SMALL,
		DB_ERROR_DBAPISEARCHMS_FUNCTION_COLUMN_NOT_FOUND,
		DB_ERROR_DBAPISEARCHMS_COMPLEXINDEX_NOT_FOUND,
		DB_ERROR_DBAPISEARCHMS_FUNCTION_ORDER_INVALID,
		DB_ERROR_INVALID_ROWID,
		DB_ERROR_INVALID_ROWID_ZERO,
		DB_ERROR_INVALID_ROWID_TOO_VERY_LARGE,
		DB_ERROR_RECORD_COPY_ERROR,
		DB_ERROR_DICTIONARY_FILE_OPEN_FAIL_AT_DBLOADDATABASEFILES_FUNTION,
		DB_ERROR_DICTIONARY_FILE_READING_FAIL_AT_DBLOADDATABASEFILES_FUNTION,
		DB_ERROR_DATA_FILE_OPEN_FAIL_AT_DBSETFILELOADMEMORYPAGE_FUNTION,
		DB_ERROR_DATA_FILE_READ_FAIL_AT_DBSETFILELOADMEMORYPAGE_FUNTION,
		DB_ERROR_INDEX_FILE_OPEN_FAIL_AT_DBSETFILELOADMEMORYPAGE_FUNTION,
		DB_ERROR_INDEX_FILE_READ_FAIL_AT_DBSETFILELOADMEMORYPAGE_FUNTION,
		DB_ERROR_DATA_FILE_OPEN_FAIL_AT_DBSETFILESTOREMEMORYPAGE_FUNTION,
		DB_ERROR_DATA_FILE_WRITE_FAIL_AT_DBSETFILESTOREMEMORYPAGE_FUNTION,
		DB_ERROR_INDEX_FILE_OPEN_FAIL_AT_DBSETFILESTOREMEMORYPAGE_FUNTION,
		DB_ERROR_INDEX_FILE_WRITE_FAIL_AT_DBSETFILESTOREMEMORYPAGE_FUNTION,
		DB_ERROR_Dictionary_FILE_OPEN_FAIL_AT_DBSTOREDICTIONARYFILE_FUNTION,
		DB_ERROR_Dictionary_FILE_WRITE_FAIL_AT_DBSTOREDICTIONARYFILE_FUNTION,
		DB_ERROR_DATA_FILE_OPEN_FAIL_AT_DBSTOREDATAFILE_FUNTION,
		DB_ERROR_DATA_FILE_WRITE_FAIL_AT_DBSTOREDATAFILE_FUNTION,
		DB_ERROR_INDEX_FILE_OPEN_FAIL_AT_DBSTOREINDEXFILE_FUNTION,
		DB_ERROR_INDEX_FILE_WRITE_FAIL_AT_DBSTOREINDEXFILE_FUNTION
	};

	extern unsigned long 	gDbErrorCode;			//Error상황을 저장할 변수
	extern char			*gDbErrorMessage;
	extern char			*gDbErrorFunction;
#endif
