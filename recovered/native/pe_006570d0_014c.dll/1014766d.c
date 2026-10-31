/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014766d */

void __thiscall FUN_1014766d(undefined4 param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  float in_XMM0_Da;
  float fVar3;
  undefined4 in_XMM1_Da;
  float in_XMM2_Da;
  float fVar4;
  float fVar5;
  
  fVar3 = DAT_1028b430;
  if (param_4 <= DAT_1028b430) {
    fVar3 = param_4;
  }
  iVar2 = (int)(float)(-(uint)(param_4 < 0.0) & (uint)DAT_102b70e0 |
                      ~-(uint)(param_4 < 0.0) & (uint)(fVar3 * DAT_102b7090 + DAT_102b70e0)) *
          0x1000000;
  fVar5 = param_2 + DAT_1028b430;
  fVar4 = DAT_102b8ac0 + in_XMM2_Da;
  fVar3 = in_XMM0_Da + in_XMM2_Da;
  FUN_10193f87(param_1,DAT_1028b430 + fVar3);
  iVar1 = iVar2 + 0xffffff;
  FUN_10193f87(param_1,fVar3,in_XMM1_Da,in_XMM2_Da,param_2,1,iVar1);
  fVar3 = (in_XMM0_Da + param_3) - in_XMM2_Da;
  FUN_10193f87(param_1,DAT_102b8a50 + fVar3,in_XMM1_Da,fVar4,fVar5,0,iVar2,fVar3);
  FUN_10193f87(param_1,fVar3,in_XMM1_Da,in_XMM2_Da,param_2,0,iVar1);
  return;
}

