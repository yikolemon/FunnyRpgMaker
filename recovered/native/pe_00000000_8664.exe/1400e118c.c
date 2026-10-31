/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e118c */

void FUN_1400e118c(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((longlong)*(int *)(param_1 + 0x2a0) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x2a8);
    plVar1 = plVar5 + *(int *)(param_1 + 0x2a0);
    do {
      lVar3 = *plVar5;
      if (*(longlong *)(lVar3 + 0x18) == param_2) {
        *(undefined8 *)(lVar3 + 0x18) = param_3;
      }
      lVar3 = *(longlong *)(lVar3 + 0x68);
      if ((lVar3 != 0) &&
         ((((param_2 != 0 || (*(longlong *)(lVar3 + 0x1310) != 0)) ||
           (*(float *)(lVar3 + 0x1324) != 0.0)) || (NAN(*(float *)(lVar3 + 0x1324)))))) {
        if (*(longlong *)(lVar3 + 0x70) == param_2) {
          *(undefined8 *)(lVar3 + 0x70) = param_3;
        }
        if (*(longlong *)(lVar3 + 0x1310) == param_2) {
          lVar4 = FUN_1400799b5();
          if (lVar3 == lVar4) {
            FUN_140090c62(param_3,*(undefined4 *)(lVar3 + 0x1324),*(undefined4 *)(lVar3 + 0x1320));
          }
          else {
            FUN_14007c50c(lVar3);
            FUN_140090c62(param_3,*(undefined4 *)(lVar3 + 0x1324),*(undefined4 *)(lVar3 + 0x1320));
            FUN_14007c50c(lVar4);
          }
        }
        iVar2 = *(int *)(lVar3 + 0x2108);
        if ((longlong)iVar2 != 0) {
          lVar3 = *(longlong *)(lVar3 + 0x2110);
          lVar4 = 0;
          do {
            if (*(longlong *)(lVar3 + lVar4) == param_2) {
              *(undefined8 *)(lVar3 + lVar4) = param_3;
            }
            lVar4 = lVar4 + 0x10;
          } while ((longlong)iVar2 * 0x10 != lVar4);
        }
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  return;
}

