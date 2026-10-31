/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402114d0 */

/* WARNING: Control flow encountered bad instruction data */

void switchD_1404b97eb::caseD_1(undefined8 param_1,undefined8 param_2,char *param_3)

{
  char in_AL;
  undefined7 in_register_00000001;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  LOCK();
  *param_3 = *param_3 + in_AL;
  UNLOCK();
  LOCK();
  *param_3 = *param_3 + in_AL;
  UNLOCK();
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

