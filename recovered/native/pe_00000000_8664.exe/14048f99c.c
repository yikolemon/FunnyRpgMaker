/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14048f99c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14048f99c(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  byte bVar5;
  sbyte sVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  
  uVar1 = ram0x000140613b10;
  puVar8 = *(ulonglong **)*param_1;
  if (puVar8 == (ulonglong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    bVar5 = (byte)ram0x000140613b10 & 0x3f;
    puVar10 = (ulonglong *)
              ((ram0x000140613b10 ^ *puVar8) >> bVar5 |
              (ram0x000140613b10 ^ *puVar8) << 0x40 - bVar5);
    puVar8 = (ulonglong *)
             ((ram0x000140613b10 ^ puVar8[1]) >> bVar5 |
             (ram0x000140613b10 ^ puVar8[1]) << 0x40 - bVar5);
    if ((longlong)puVar10 - 1U < 0xfffffffffffffffe) {
      uVar7 = (uint)ram0x000140613b10 & 0x3f;
      puVar9 = puVar8;
      uVar3 = ram0x000140613b10;
      puVar13 = puVar10;
      while (puVar8 = puVar8 + -1, puVar10 <= puVar8) {
        if (*puVar8 != uVar1) {
          *puVar8 = uVar1;
          FUN_1404b9600(uVar7);
          uVar7 = (uint)ram0x000140613b10 & 0x3f;
          uVar11 = ram0x000140613b10 ^ **(ulonglong **)*param_1;
          uVar3 = ram0x000140613b10 ^ (*(ulonglong **)*param_1)[1];
          sVar6 = (sbyte)uVar7;
          puVar12 = (ulonglong *)(uVar11 >> sVar6 | uVar11 << 0x40 - sVar6);
          puVar4 = (ulonglong *)(uVar3 >> sVar6 | uVar3 << 0x40 - sVar6);
          uVar3 = ram0x000140613b10;
          if ((puVar12 != puVar13) || (puVar4 != puVar9)) {
            puVar8 = puVar4;
            puVar9 = puVar4;
            puVar10 = puVar12;
            puVar13 = puVar12;
          }
        }
      }
      if (puVar10 != (ulonglong *)0xffffffffffffffff) {
        FUN_1404a2310(puVar10);
        uVar3 = ram0x000140613b10;
      }
      **(ulonglong **)*param_1 = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 8) = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 0x10) = uVar3;
    }
    uVar2 = 0;
  }
  return uVar2;
}

