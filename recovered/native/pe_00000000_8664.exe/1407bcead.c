/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bcead */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407bcead(longlong param_1,uint *param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  byte bVar4;
  ulonglong unaff_RBX;
  bool bVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = _DAT_150a7591a;
  uVar2 = *param_2;
  if ((unaff_RBX & 0x100000000) != 0) {
    fVar1 = (float)param_2[8];
    fVar6 = _DAT_150a7591a;
    if ((uVar2 & 0x10) != 0) {
      fVar6 = (float)(~-(uint)(0.0 < fVar1) & (uint)_DAT_150a7591a |
                     -(uint)(0.0 < fVar1) & (uint)fVar1);
    }
    fVar7 = fVar1;
    if ((uVar2 & 8) == 0) {
      fVar7 = _DAT_150a7591a;
    }
    param_2[4] = (uint)fVar6;
    if (fVar1 <= 0.0) {
      fVar7 = fVar3;
    }
    param_2[7] = (uint)fVar7;
    if (0.0 < fVar1) {
      *(undefined1 *)((longlong)param_2 + 0x6f) = 0;
    }
  }
  if ((unaff_RBX & 0x200000000) != 0) {
    *(short *)((longlong)param_2 + 0x56) =
         (short)((uint)((int)param_2 - *(int *)(param_1 + 0x10)) >> 2) * -0x3dcb;
  }
  if ((unaff_RBX & 0x400000000) != 0) {
    bVar5 = (uVar2 & 2) == 0;
    *(bool *)(param_2 + 0x1a) = bVar5;
    *(bool *)((longlong)param_2 + 0x67) = bVar5;
  }
  if ((unaff_RBX & 0x800000000) != 0) {
    bVar4 = 2 - (-1 < (short)uVar2);
    bVar5 = (uVar2 & 4) == 0;
    if (bVar5) {
      bVar4 = 0;
    }
    *(ushort *)((longlong)param_2 + 0x5e) = -(ushort)bVar5;
    *(byte *)((longlong)param_2 + 0x71) = *(byte *)((longlong)param_2 + 0x71) & 0xfc | bVar4;
  }
  return;
}

