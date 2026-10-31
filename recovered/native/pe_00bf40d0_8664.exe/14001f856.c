/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001f856 */

undefined8
FUN_14001f856(longlong param_1,uint param_2,longlong param_3,longlong param_4,longlong param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_EAX;
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  auVar3._0_4_ = -(uint)(param_1 == 0);
  auVar3._4_4_ = -(uint)(param_3 == 0);
  auVar3._8_4_ = -(uint)(param_4 == 0);
  auVar3._12_4_ = -(uint)(param_5 == 0);
  iVar1 = movmskps(in_EAX,auVar3);
  if ((((iVar1 == 0) && (param_2 < *(uint *)(param_1 + 0x10))) &&
      ((*(byte *)(param_1 + 8) & 8) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x2d0) + 0x118),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014001f8b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0;
}

