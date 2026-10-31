/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041063c */

undefined4 * __cdecl FUN_0041063c(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint auStack_4c [6];
  char local_34 [31];
  undefined1 auStack_15 [5];
  
  auStack_15._1_4_ = DAT_0050e8c0 ^ (uint)auStack_4c;
  iVar4 = 0;
  do {
    iVar3 = iVar4;
    auStack_15[iVar3] = (&DAT_004a9164)[param_3 & 0xf];
    param_3 = param_3 >> 4;
    iVar4 = iVar3 + -1;
  } while (param_3 != 0);
  if (iVar4 == -0x18 || -iVar4 < 0x18) {
    thunk_FUN_0040c6a9((uint *)(auStack_15 + iVar3),-iVar4,auStack_4c);
    pcVar2 = (char *)((int)auStack_4c - iVar4);
  }
  else {
    pcVar2 = local_34;
  }
  iVar4 = param_2[2];
  uVar1 = iVar4 + 1;
  if ((uint)param_2[3] < uVar1) {
    (**(code **)*param_2)(uVar1);
    iVar4 = param_2[2];
    uVar1 = iVar4 + 1;
  }
  param_2[2] = uVar1;
  *(undefined2 *)(param_2[1] + iVar4 * 2) = 0x30;
  iVar4 = param_2[2];
  uVar1 = iVar4 + 1;
  if ((uint)param_2[3] < uVar1) {
    (**(code **)*param_2)(uVar1);
    iVar4 = param_2[2];
    uVar1 = iVar4 + 1;
  }
  param_2[2] = uVar1;
  *(undefined2 *)(param_2[1] + iVar4 * 2) = 0x78;
  FUN_0040c483(param_1,(char *)auStack_4c,pcVar2,param_2);
  if (DAT_0050e8c0 == (auStack_15._1_4_ ^ (uint)auStack_4c)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(auStack_15._1_4_ ^ (uint)auStack_4c);
}

