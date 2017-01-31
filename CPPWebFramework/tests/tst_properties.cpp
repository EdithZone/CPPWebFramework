#include "tst_properties.h"

void TST_Properties::test()
{
    CWF::Properties properties("TST_Properties.test()");
    QVERIFY2(properties.m_class  == "TST_Properties", "Should be TST_Properties");
    QVERIFY2(properties.m_method == "test()", "Should be test().");
}
