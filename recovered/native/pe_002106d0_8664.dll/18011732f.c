/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011732f */

void FUN_18011732f(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  lVar2 = DAT_180419160;
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  if ((((*(char *)(lVar1 + 0x110) == '\x01') &&
       (*(longlong *)(DAT_180419160 + 0x2200) == *(longlong *)(lVar1 + 0x438))) &&
      ((*(char *)(DAT_180419160 + 0x2262) != '\0' || (*(int *)(DAT_180419160 + 0x2270) != 0)))) &&
     (*(int *)(DAT_180419160 + 0x220c) == *(int *)(lVar1 + 0x1b0))) {
    *(undefined1 *)(DAT_180419160 + 0x2262) = 0;
    FUN_180117450(lVar2 + 0x2268);
    uVar3 = 1;
    if (*(char *)(DAT_180419160 + 0x22a1) == '\0') {
      uVar3 = *(undefined1 *)(DAT_180419160 + 0x2262);
    }
    *(undefined1 *)(DAT_180419160 + 0x2261) = uVar3;
    if ((((*(float *)(lVar2 + 0x1fec) < *(float *)(lVar1 + 0x2b8)) ||
         (*(float *)(lVar2 + 0x1ff0) < *(float *)(lVar1 + 700))) ||
        (*(float *)(lVar1 + 0x2c0) < *(float *)(lVar2 + 0x1ff4))) ||
       (*(float *)(lVar1 + 0x2c4) < *(float *)(lVar2 + 0x1ff8))) {
      FUN_1801174ae(local_20,lVar1,lVar2 + 0x1fec,0);
    }
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

