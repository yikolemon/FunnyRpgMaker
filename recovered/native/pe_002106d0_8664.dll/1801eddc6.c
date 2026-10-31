/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801eddc6 */

void FUN_1801eddc6(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  puVar4 = *(undefined4 **)(param_1 + 0x240);
  if ((puVar4 != (undefined4 *)0x0) && ((ulonglong)*(uint *)(param_1 + 0x238) != 0)) {
    puVar1 = puVar4 + (ulonglong)*(uint *)(param_1 + 0x238) * 5;
    do {
      if ((*(char *)(param_1 + 0x1f0) == *(char *)(puVar4 + 3)) && (*(char *)(puVar4 + 4) != '\0'))
      {
        iVar2 = *(int *)(param_1 + 0x250);
        lVar5 = (longlong)iVar2;
        if (iVar2 < *(int *)(param_1 + 0x254)) {
          lVar3 = *(longlong *)(param_1 + 600);
          *(int *)(param_1 + 0x250) = iVar2 + 1;
          *(undefined4 *)(lVar3 + lVar5 * 0x18) = *(undefined4 *)(param_1 + 0x1dc);
          *(int *)(lVar3 + 4 + lVar5 * 0x18) = *(int *)(param_1 + 0x1e8) + 1;
          *(undefined4 *)(lVar3 + 8 + lVar5 * 0x18) = 1;
          *(undefined4 **)(lVar3 + 0x10 + lVar5 * 0x18) = puVar4;
          FUN_1801f8bb8(param_1,*puVar4,puVar4[1]);
          return;
        }
        *(undefined4 *)(param_1 + 0x20) = 0x82;
        return;
      }
      puVar4 = puVar4 + 5;
    } while (puVar4 < puVar1);
  }
  *(undefined4 *)(param_1 + 0x20) = 0x80;
  return;
}

