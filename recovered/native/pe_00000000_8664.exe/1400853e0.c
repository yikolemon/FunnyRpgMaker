/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400853e0 */

void FUN_1400853e0(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(byte *)(param_1 + 0x30) & 0x80) == 0) {
    if ((0 < *(int *)(param_1 + 0x2930)) || (0 < *(int *)(param_1 + 0x2940))) {
      FUN_140098456(param_1,0,1);
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 0x80) == '\x01') {
      iVar3 = *(int *)(param_1 + 0x2930);
      if (0 < iVar3) {
        lVar5 = 8;
        lVar4 = 0;
        do {
          puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x2938) + lVar5);
          if (((puVar1 != (undefined4 *)0x0) && (*(longlong *)(puVar1 + 6) == 0)) &&
             (*(longlong *)(puVar1 + 8) != 0)) {
            FUN_140098568(*puVar1);
            iVar3 = *(int *)(param_1 + 0x2930);
          }
          lVar4 = lVar4 + 1;
          lVar5 = lVar5 + 0x10;
        } while (lVar4 < iVar3);
      }
    }
    if (*(char *)(param_1 + 0x2960) == '\x01') {
      FUN_140098903(param_1);
      *(undefined1 *)(param_1 + 0x2960) = 0;
    }
    iVar3 = *(int *)(param_1 + 0x2940);
    if ((longlong)iVar3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x2948);
      lVar5 = 0;
      do {
        if (*(int *)(lVar4 + lVar5) == 2) {
          lVar2 = *(longlong *)(lVar4 + 0x30 + lVar5);
          if (lVar2 == 0) {
            if (*(longlong *)(lVar4 + 0x38 + lVar5) != 0) {
              FUN_140098b9e(param_1);
            }
          }
          else {
            FUN_140096efe(param_1,lVar2,1);
          }
        }
        lVar5 = lVar5 + 0x40;
      } while ((longlong)iVar3 * 0x40 != lVar5);
    }
  }
  return;
}

