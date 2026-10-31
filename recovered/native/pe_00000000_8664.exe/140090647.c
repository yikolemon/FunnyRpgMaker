/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140090647 */

void FUN_140090647(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  lVar2 = DAT_140f2a910;
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  if ((((*(char *)(lVar1 + 0x110) == '\x01') &&
       (*(longlong *)(DAT_140f2a910 + 0x2200) == *(longlong *)(lVar1 + 0x438))) &&
      ((*(char *)(DAT_140f2a910 + 0x2262) != '\0' || (*(int *)(DAT_140f2a910 + 0x2270) != 0)))) &&
     (*(int *)(DAT_140f2a910 + 0x220c) == *(int *)(lVar1 + 0x1b0))) {
    *(undefined1 *)(DAT_140f2a910 + 0x2262) = 0;
    FUN_140090768(lVar2 + 0x2268);
    uVar3 = 1;
    if (*(char *)(DAT_140f2a910 + 0x22a1) == '\0') {
      uVar3 = *(undefined1 *)(DAT_140f2a910 + 0x2262);
    }
    *(undefined1 *)(DAT_140f2a910 + 0x2261) = uVar3;
    if ((((*(float *)(lVar2 + 0x1fec) < *(float *)(lVar1 + 0x2b8)) ||
         (*(float *)(lVar2 + 0x1ff0) < *(float *)(lVar1 + 700))) ||
        (*(float *)(lVar1 + 0x2c0) < *(float *)(lVar2 + 0x1ff4))) ||
       (*(float *)(lVar1 + 0x2c4) < *(float *)(lVar2 + 0x1ff8))) {
      FUN_1400907c6(local_20,lVar1,lVar2 + 0x1fec,0);
    }
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

