#include "QAQ.h"

class Shell : public QAQ::Application
{
public:
	Shell()
	{
		
	}

	~Shell()
	{
		
	}

	
	
};

QAQ::Application* QAQ::CreateApplication()
{
	return new Shell();
}