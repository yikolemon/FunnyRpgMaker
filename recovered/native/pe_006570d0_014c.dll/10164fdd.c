/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10164fdd */

void __fastcall FUN_10164fdd(int param_1,uint *param_2,uint param_3)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  byte bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = DAT_102b8a50;
  uVar2 = *param_2;
  if ((param_3 & 1) != 0) {
    fVar1 = (float)param_2[8];
    fVar6 = DAT_102b8a50;
    if ((uVar2 & 0x10) != 0) {
      fVar6 = (float)(~-(uint)(0.0 < fVar1) & (uint)DAT_102b8a50 |
                     -(uint)(0.0 < fVar1) & (uint)fVar1);
    }
    fVar7 = fVar1;
    if ((uVar2 & 8) == 0) {
      fVar7 = DAT_102b8a50;
    }
    param_2[4] = (uint)fVar6;
    if (fVar1 <= 0.0) {
      fVar7 = fVar3;
    }
    param_2[7] = (uint)fVar7;
    if (0.0 < fVar1) {
      *(undefined1 *)((int)param_2 + 0x6f) = 0;
    }
  }
  if ((param_3 & 2) != 0) {
    *(short *)((int)param_2 + 0x56) =
         (short)((uint)((int)param_2 - *(int *)(param_1 + 0x10)) >> 2) * -0x3dcb;
  }
  if ((param_3 & 4) != 0) {
    bVar5 = (uVar2 & 2) == 0;
    *(bool *)(param_2 + 0x1a) = bVar5;
    *(bool *)((int)param_2 + 0x67) = bVar5;
  }
  if ((param_3 & 8) != 0) {
    bVar4 = 2 - (-1 < (short)uVar2);
    bVar5 = (uVar2 & 4) == 0;
    if (bVar5) {
      bVar4 = 0;
    }
    *(ushort *)((int)param_2 + 0x5e) = -(ushort)bVar5;
    *(byte *)((int)param_2 + 0x71) = *(byte *)((int)param_2 + 0x71) & 0xfc | bVar4;
  }
  return;
}

