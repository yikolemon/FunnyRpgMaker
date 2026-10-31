/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180196358 */

void FUN_180196358(longlong param_1,int param_2,int param_3,longlong param_4,int param_5,int param_6
                  ,int param_7,int param_8)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  if (param_2 == param_5) {
    if (0 < param_8) {
      iVar2 = FUN_180195a57(param_2);
      uVar3 = param_8 + 1;
      do {
        FUN_1802a82f0(param_4,param_1,(longlong)(iVar2 * param_7));
        param_1 = param_1 + param_3;
        param_4 = param_4 + param_6;
        uVar3 = uVar3 - 1;
      } while (1 < uVar3);
    }
  }
  else if (param_2 == 1 && param_5 == 0) {
    if (0 < param_8) {
      do {
        if (0 < param_7) {
          lVar4 = 0;
          uVar3 = param_7 + 1;
          do {
            *(uint *)(param_4 + lVar4 * 4) = (uint)*(byte *)(param_1 + lVar4) << 0x18 | 0xffffff;
            uVar3 = uVar3 - 1;
            lVar4 = lVar4 + 1;
          } while (1 < uVar3);
        }
        param_1 = param_1 + param_3;
        param_4 = param_4 + param_6;
        iVar2 = param_8 + -1;
        bVar1 = 0 < param_8;
        param_8 = iVar2;
      } while (iVar2 != 0 && bVar1);
    }
  }
  else if (0 < param_8 && (param_2 == 0 && param_5 == 1)) {
    do {
      if (0 < param_7) {
        lVar4 = 0;
        uVar3 = param_7 + 1;
        do {
          *(undefined1 *)(param_4 + lVar4) = *(undefined1 *)(param_1 + 3 + lVar4 * 4);
          uVar3 = uVar3 - 1;
          lVar4 = lVar4 + 1;
        } while (1 < uVar3);
      }
      param_1 = param_1 + param_3;
      param_4 = param_4 + param_6;
      iVar2 = param_8 + -1;
      bVar1 = 0 < param_8;
      param_8 = iVar2;
    } while (iVar2 != 0 && bVar1);
  }
  return;
}

