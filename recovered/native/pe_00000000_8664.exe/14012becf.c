/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012becf */

undefined8
FUN_14012becf(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             )

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_EAX;
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  auVar3._0_4_ = -(uint)((int)((ulonglong)param_1 >> 0x20) == 0 && (int)param_1 == 0);
  auVar3._4_4_ = -(uint)((int)param_3 == 0 && (int)((ulonglong)param_3 >> 0x20) == 0);
  auVar3._8_4_ = -(uint)((int)((ulonglong)param_4 >> 0x20) == 0 && (int)param_4 == 0);
  auVar3._12_4_ = -(uint)((int)param_5 == 0 && (int)((ulonglong)param_5 >> 0x20) == 0);
  iVar1 = movmskps(in_EAX,auVar3);
  if ((((iVar1 == 0) && (param_2 < *(uint *)(param_1 + 0x10))) &&
      ((*(byte *)(param_1 + 8) & 8) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x2d0) + 0x118),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014012bf2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0;
}

