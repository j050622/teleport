#ifndef __TS_ENV_H__
#define __TS_ENV_H__

#include <ex.h>

class TsEnv
{
public:
	TsEnv();
	~TsEnv();

	bool init(void);
	bool check_db_file(void);

	ExIniFile& get_ini(void) { return m_ini; }

public:
	ex_wstr m_exec_file;
	ex_wstr m_exec_path;
	ex_wstr m_etc_path;

	ex_wstr m_db_file;

	ex_astr rpc_bind_ip;
	int rpc_bind_port;

private:
	ExIniFile m_ini;
};

extern TsEnv g_env;

#endif // __TS_ENV_H__
