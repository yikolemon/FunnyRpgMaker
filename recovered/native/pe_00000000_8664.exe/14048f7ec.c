/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14048f7ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14048f7ec(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  
  puVar3 = *(ulonglong **)*param_1;
  if (puVar3 == (ulonglong *)0x0) {
LAB_14048f97e:
    uVar1 = 0xffffffff;
  }
  else {
    bVar2 = (byte)ram0x000140613b10 & 0x3f;
    uVar5 = (ram0x000140613b10 ^ *puVar3) >> bVar2 | (ram0x000140613b10 ^ *puVar3) << 0x40 - bVar2;
    puVar9 = (ulonglong *)
             ((ram0x000140613b10 ^ puVar3[1]) >> bVar2 |
             (ram0x000140613b10 ^ puVar3[1]) << 0x40 - bVar2);
    puVar3 = (ulonglong *)
             ((ram0x000140613b10 ^ puVar3[2]) >> bVar2 |
             (ram0x000140613b10 ^ puVar3[2]) << 0x40 - bVar2);
    if (puVar9 == puVar3) {
      uVar4 = (longlong)((longlong)puVar3 - uVar5) >> 3;
      uVar6 = uVar4;
      if (0x200 < uVar4) {
        uVar6 = 0x200;
      }
      uVar7 = uVar6 + uVar4;
      if (uVar6 + uVar4 == 0) {
        uVar7 = 0x20;
      }
      if (uVar7 < uVar4) {
LAB_14048f88e:
        uVar7 = uVar4 + 4;
        uVar6 = _recalloc_base(uVar5,uVar7,8);
        FUN_1404a2310(0);
        if (uVar6 == 0) goto LAB_14048f97e;
      }
      else {
        uVar6 = _recalloc_base(uVar5,uVar7,8);
        FUN_1404a2310(0);
        if (uVar6 == 0) goto LAB_14048f88e;
      }
      uVar5 = uVar6;
      uVar6 = ram0x000140613b10;
      puVar9 = (ulonglong *)(uVar5 + uVar4 * 8);
      puVar3 = (ulonglong *)(uVar5 + uVar7 * 8);
      uVar4 = (ulonglong)((longlong)puVar3 + (7 - (longlong)puVar9)) >> 3;
      if (puVar3 < puVar9) {
        uVar4 = 0;
      }
      puVar8 = puVar9;
      if (uVar4 != 0) {
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar8 = uVar6;
          puVar8 = puVar8 + 1;
        }
      }
    }
    bVar2 = -((byte)ram0x000140613b10 & 0x3f) & 0x3f;
    *puVar9 = (*(ulonglong *)param_1[1] >> bVar2 | *(ulonglong *)param_1[1] << 0x40 - bVar2) ^
              ram0x000140613b10;
    bVar2 = -((byte)ram0x000140613b10 & 0x3f) & 0x3f;
    **(ulonglong **)*param_1 = (uVar5 >> bVar2 | uVar5 << 0x40 - bVar2) ^ ram0x000140613b10;
    bVar2 = -((byte)ram0x000140613b10 & 0x3f) & 0x3f;
    *(ulonglong *)(*(longlong *)*param_1 + 8) =
         ((ulonglong)(puVar9 + 1) >> bVar2 | (longlong)(puVar9 + 1) << 0x40 - bVar2) ^
         ram0x000140613b10;
    bVar2 = 0x40 - ((byte)ram0x000140613b10 & 0x3f) & 0x3f;
    uVar1 = 0;
    *(ulonglong *)(*(longlong *)*param_1 + 0x10) =
         ((ulonglong)puVar3 >> bVar2 | (longlong)puVar3 << 0x40 - bVar2) ^ ram0x000140613b10;
  }
  return uVar1;
}

