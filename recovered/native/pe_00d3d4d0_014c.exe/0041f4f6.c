/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041f4f6 */

undefined4 __thiscall
FUN_0041f4f6(undefined4 param_1,int param_2,uint param_3,int param_4,undefined8 param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  
  auVar3._0_4_ = -(uint)(param_2 == 0);
  auVar3._4_4_ = -(uint)(param_4 == 0);
  auVar3._8_4_ = -(uint)((int)param_5 == 0);
  auVar3._12_4_ =
       -(uint)(SUB124(SUB1612((undefined1  [16])0x0,4),8) == (int)((ulonglong)param_5 >> 0x20));
  iVar2 = movmskps(param_1,auVar3);
  if ((((iVar2 == 0) && (param_3 < *(uint *)(param_2 + 0x10))) &&
      ((*(byte *)(param_2 + 8) & 8) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_2 + 0x21c) + 0x8c),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0041f540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}

