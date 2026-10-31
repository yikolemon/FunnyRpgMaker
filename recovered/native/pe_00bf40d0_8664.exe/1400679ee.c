/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400679ee */

void FUN_1400679ee(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 *param_10)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [32];
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_1400b3c00((undefined1 (*) [32])(param_1 + 2),0,0x4950);
  *param_1 = param_2;
  param_1[1] = param_3;
  puVar1 = param_1 + 0x911;
  FUN_1400679c0(puVar1,*param_2,param_2 + 1,0x10);
  pauVar2 = (undefined1 (*) [32])(param_1 + 0x60c);
  FUN_140068c32(pauVar2,(longlong)param_2,pauVar2,puVar1,param_4);
  FUN_140068c32((undefined1 (*) [32])(param_1 + 0x307),(longlong)param_2,pauVar2,puVar1,param_4);
  FUN_140068c32((undefined1 (*) [32])(param_1 + 2),(longlong)param_2,pauVar2,puVar1,param_4);
  *(undefined4 *)(param_1 + 0x918) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x48c4) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x919) = *(undefined4 *)(param_2 + 7);
  *(undefined8 *)((longlong)param_1 + 0x48cc) = *param_10;
  param_1[0x91b] = param_5;
  param_1[0x91c] = param_6;
  param_1[0x91d] = param_7;
  *(undefined4 *)(param_1 + 0x91e) = param_8;
  param_1[0x91f] = param_9;
  *(undefined1 *)((longlong)param_1 + 0x48d6) = *(undefined1 *)((longlong)param_2 + 0x101);
  iVar5 = *(int *)((longlong)param_2 + 300);
  *(int *)(param_1 + 0x920) = iVar5;
  iVar3 = *(int *)(param_2 + 0x26);
  *(int *)((longlong)param_1 + 0x4904) = iVar3;
  iVar4 = -iVar5;
  if (-iVar5 < 0) {
    iVar4 = iVar5;
  }
  iVar5 = -iVar3;
  if (-iVar3 < 0) {
    iVar5 = iVar3;
  }
  if (iVar5 < iVar4) {
    iVar5 = iVar4;
  }
  *(int *)(param_1 + 0x921) = iVar5 * 2;
  *(undefined4 *)((longlong)param_1 + 0x490c) = 0x199a;
  *(undefined1 *)((longlong)param_1 + 0x48d7) = 1;
  *(undefined2 *)((longlong)param_1 + 0x48d4) = 0;
  *(undefined1 *)(param_1 + 0x927) = 0;
  return;
}

