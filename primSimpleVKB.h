#define NOMINMAX

#include "baseinterface.h"
#include <limits>
/*
 * ����
 * ��������
 * ������
 */

class PrimaSimpleVKB: public BaseInterface
{
protected:

	int *b;
	int *rebro;
public:
	void solve();
	void convert_to_str();
};
