/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140067fe0 */

void FUN_140067fe0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  
  FUN_140068455(param_1);
  *(undefined4 *)(param_1 + 0x926) = param_2;
  *(undefined4 *)(param_1 + 0x924) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x4934) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x4924) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x48d7) = 1;
  plVar1 = param_1 + 2;
  cVar3 = FUN_1400692c6((longlong)plVar1);
  puVar2 = (undefined8 *)param_1[0x91d];
  if (cVar3 != '\0') {
    cVar3 = FUN_1400692ca((longlong)puVar2);
    if (cVar3 == '\0') goto LAB_14006805e;
  }
  FUN_140068c7d(plVar1,param_1[0x91b],param_1[0x91c],puVar2,(int)param_1[0x91e],'\0');
LAB_14006805e:
  FUN_1400b3550(param_1 + 0x307,plVar1,0x1828);
  return;
}

