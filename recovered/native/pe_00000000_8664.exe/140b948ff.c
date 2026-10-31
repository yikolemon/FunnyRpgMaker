/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140b948ff */

/* WARNING: Control flow encountered bad instruction data */

void Unwind_140b948ff(undefined8 param_1,byte param_2)

{
  byte *pbVar1;
  byte bVar2;
  char in_AL;
  undefined7 in_register_00000001;
  
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,in_AL) + 0x48);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + param_2;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       (*(char *)CONCAT71(in_register_00000001,in_AL) - in_AL) - CARRY1(bVar2,param_2);
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

