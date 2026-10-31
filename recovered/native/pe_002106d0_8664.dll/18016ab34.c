/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016ab34 */

undefined8 FUN_18016ab34(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x24f8);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if ((*(char *)(lVar1 + 0x23a) == '\x01') &&
       (*(int *)(lVar1 + 0x74) + 1 < *(int *)(lVar1 + 0x6c))) {
      if (*(int *)(lVar1 + 0x74) == -1) {
        iVar4 = 0;
      }
      else {
        FUN_18016a84c(lVar1);
        iVar4 = *(int *)(lVar1 + 0x74) + 1;
      }
    }
    else {
      iVar4 = 0;
      FUN_18016a67b(0,0);
    }
    FUN_18016a9c8(lVar1,iVar4);
    lVar2 = (longlong)*(int *)(lVar1 + 0x74) * 0x74;
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),
                     *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x6b + lVar2));
  }
  return uVar3;
}

