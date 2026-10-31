/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101704b0 */

int __fastcall FUN_101704b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = FUN_10173127(4,0);
    if (iVar1 == 0) {
      thunk_FUN_10274120(param_1);
      FUN_10170e07();
      iVar1 = 0;
    }
    else {
      if (0 < param_3 * param_2) {
        iVar3 = 0;
        iVar4 = param_1;
        iVar5 = iVar1;
        do {
          iVar2 = 0;
          do {
            fVar6 = (float10)FUN_1026fab0((double)*(float *)(iVar4 + iVar2 * 4),0xc0000000,
                                          0x3fdd1745);
            fVar8 = DAT_102b70e0;
            fVar9 = DAT_102b7090;
            fVar7 = (float)fVar6 * DAT_102b7090 + DAT_102b70e0;
            fVar10 = 0.0;
            if (0.0 <= fVar7) {
              fVar10 = fVar7;
            }
            fVar7 = DAT_102b7090;
            if (fVar10 <= DAT_102b7090) {
              fVar7 = fVar10;
            }
            *(char *)(iVar5 + iVar2) = (char)(int)fVar7;
            iVar2 = iVar2 + 1;
          } while (iVar2 != 3);
          fVar8 = *(float *)(param_1 + 0xc + iVar3 * 0x10) * fVar9 + fVar8;
          fVar10 = 0.0;
          if (0.0 <= fVar8) {
            fVar10 = fVar8;
          }
          if (fVar10 <= fVar9) {
            fVar9 = fVar10;
          }
          *(char *)(iVar1 + 3 + iVar3 * 4) = (char)(int)fVar9;
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 4;
          iVar4 = iVar4 + 0x10;
        } while (iVar3 != param_3 * param_2);
      }
      thunk_FUN_10274120(param_1);
    }
  }
  return iVar1;
}

