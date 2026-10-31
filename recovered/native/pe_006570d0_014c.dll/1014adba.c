/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014adba */

void __fastcall FUN_1014adba(undefined4 param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = DAT_1039d74c;
  *(undefined4 *)(DAT_1039d74c + 0x2394) = param_1;
  *(undefined1 *)(iVar2 + 0x2399) = 1;
  bVar3 = (param_2 & param_3) == 0xffffffff;
  *(bool *)(iVar2 + 0x239a) = bVar3;
  *(bool *)(iVar2 + 0x239b) = bVar3;
  *(undefined2 *)(iVar2 + 0x23a0) = *(undefined2 *)(iVar2 + 0x108);
  uVar1 = *(undefined8 *)(*(int *)(iVar2 + 0x14cc) + 0x154);
  fVar4 = (float)*(undefined8 *)(iVar2 + 0xe4) - (float)uVar1;
  fVar5 = (float)((ulonglong)*(undefined8 *)(iVar2 + 0xe4) >> 0x20) -
          (float)((ulonglong)uVar1 >> 0x20);
  *(float *)(iVar2 + 0x23a4) = fVar4;
  *(float *)(iVar2 + 0x23a8) = fVar5;
  *(float *)(iVar2 + 0x23ac) = fVar4;
  *(float *)(iVar2 + 0x23b0) = fVar5;
  *(undefined4 *)(iVar2 + 0x23b4) = 0;
  *(undefined4 *)(iVar2 + 0x23b8) = 0;
  return;
}

