/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b698a */

undefined8 FUN_1408b698a(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((*(uint *)((ulonglong)*(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8) + 0xc)
       >> 0xc & 1) == 0) {
    uVar1 = FUN_1408d056e();
    uVar4 = 0x1039b678;
    if ((uVar1 == 0xffffffff) || (uVar1 == 0xfffffffe)) {
      uVar5 = 0x1039b678;
    }
    else {
      uVar5 = (ulonglong)
              ((uVar1 & 0x3f) * 0x38 + *(int *)((ulonglong)(uint)((int)uVar1 >> 6) * 4 + 0x103a5230)
              );
    }
    if (*(char *)(uVar5 + 0x29) == '\0') {
      if ((uVar1 != 0xffffffff) && (uVar1 != 0xfffffffe)) {
        uVar4 = (ulonglong)
                ((uVar1 & 0x3f) * 0x38 +
                *(int *)((ulonglong)(uint)((int)uVar1 >> 6) * 4 + 0x103a5230));
      }
      if ((*(byte *)(uVar4 + 0x2d) & 1) == 0) goto LAB_1408b6a0c;
    }
    puVar2 = (undefined4 *)FUN_1408c0ecd();
    *puVar2 = 0x16;
    FUN_1408cbd78();
    uVar3 = 0;
  }
  else {
LAB_1408b6a0c:
    uVar3 = 1;
  }
  return uVar3;
}

