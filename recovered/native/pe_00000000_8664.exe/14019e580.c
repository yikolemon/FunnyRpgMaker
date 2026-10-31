/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019e580 */

undefined8 FUN_14019e580(undefined8 *param_1)

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
LAB_14019e712:
    uVar1 = 0xffffffff;
  }
  else {
    bVar2 = (byte)DAT_140f17b40 & 0x3f;
    uVar5 = (DAT_140f17b40 ^ *puVar3) >> bVar2 | (DAT_140f17b40 ^ *puVar3) << 0x40 - bVar2;
    puVar9 = (ulonglong *)
             ((DAT_140f17b40 ^ puVar3[1]) >> bVar2 | (DAT_140f17b40 ^ puVar3[1]) << 0x40 - bVar2);
    puVar3 = (ulonglong *)
             ((DAT_140f17b40 ^ puVar3[2]) >> bVar2 | (DAT_140f17b40 ^ puVar3[2]) << 0x40 - bVar2);
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
LAB_14019e622:
        uVar7 = uVar4 + 4;
        uVar6 = _recalloc_base(uVar5,uVar7,8);
        FUN_1401aea30(0);
        if (uVar6 == 0) goto LAB_14019e712;
      }
      else {
        uVar6 = _recalloc_base(uVar5,uVar7,8);
        FUN_1401aea30(0);
        if (uVar6 == 0) goto LAB_14019e622;
      }
      uVar5 = uVar6;
      uVar6 = DAT_140f17b40;
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
    bVar2 = -((byte)DAT_140f17b40 & 0x3f) & 0x3f;
    *puVar9 = (*(ulonglong *)param_1[1] >> bVar2 | *(ulonglong *)param_1[1] << 0x40 - bVar2) ^
              DAT_140f17b40;
    bVar2 = -((byte)DAT_140f17b40 & 0x3f) & 0x3f;
    **(ulonglong **)*param_1 = (uVar5 >> bVar2 | uVar5 << 0x40 - bVar2) ^ DAT_140f17b40;
    bVar2 = -((byte)DAT_140f17b40 & 0x3f) & 0x3f;
    *(ulonglong *)(*(longlong *)*param_1 + 8) =
         ((ulonglong)(puVar9 + 1) >> bVar2 | (longlong)(puVar9 + 1) << 0x40 - bVar2) ^ DAT_140f17b40
    ;
    bVar2 = 0x40 - ((byte)DAT_140f17b40 & 0x3f) & 0x3f;
    uVar1 = 0;
    *(ulonglong *)(*(longlong *)*param_1 + 0x10) =
         ((ulonglong)puVar3 >> bVar2 | (longlong)puVar3 << 0x40 - bVar2) ^ DAT_140f17b40;
  }
  return uVar1;
}

