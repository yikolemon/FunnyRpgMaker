/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801eb7c1 */

ulonglong FUN_1801eb7c1(ushort *param_1,ushort *param_2)

{
  ushort *puVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort *puVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  ushort uVar9;
  ushort *puVar10;
  
  puVar10 = param_1 + 3;
  if (puVar10 <= param_2) {
    uVar6 = (ulonglong)((uint)(byte)param_1[2] * 0x200 + (uint)*(byte *)((longlong)param_1 + 5) * 2)
    ;
    puVar1 = (ushort *)((longlong)puVar10 + uVar6);
    if (puVar1 <= param_2) {
      uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      if (uVar6 != 0) {
        uVar3 = *param_1 << 8 | *param_1 >> 8;
        uVar5 = 0;
        do {
          puVar7 = (ushort *)
                   ((longlong)param_1 +
                   (ulonglong)(byte)*puVar10 * 0x100 + (ulonglong)*(byte *)((longlong)puVar10 + 1));
          uVar9 = uVar3;
          if (uVar3 == 7) {
            if (((param_2 < puVar7 + 4) || ((ushort)(*puVar7 << 8 | *puVar7 >> 8) != 1)) ||
               ((uVar4 = puVar7[1] << 8 | puVar7[1] >> 8, uVar9 = uVar4, uVar5 != 0 &&
                (uVar9 = uVar5, uVar5 != uVar4)))) goto LAB_1801eb7f5;
            puVar7 = (ushort *)
                     ((longlong)puVar7 +
                     (ulonglong)*(byte *)((longlong)puVar7 + 7) +
                     (ulonglong)(byte)puVar7[3] * 0x100 +
                     (ulonglong)*(byte *)((longlong)puVar7 + 5) * 0x10000 +
                     (ulonglong)(byte)puVar7[2] * 0x1000000);
          }
          if (param_2 < puVar7 + 3) goto LAB_1801eb7f5;
          uVar5 = *puVar7 << 8 | *puVar7 >> 8;
          if (uVar9 == 3) {
            if (uVar5 != 1) goto LAB_1801eb7f5;
            cVar2 = FUN_1801eb9a7(puVar7,param_2);
          }
          else {
            if (uVar9 != 1) goto LAB_1801eb7f5;
            if (uVar5 == 2) {
              cVar2 = FUN_1801eb921(puVar7,param_2);
            }
            else {
              if (uVar5 != 1) goto LAB_1801eb7f5;
              cVar2 = FUN_1801eb907(puVar7,param_2);
            }
          }
          if (cVar2 == '\0') goto LAB_1801eb7f5;
          puVar10 = puVar10 + 1;
          uVar5 = uVar9;
        } while (puVar10 < puVar1);
      }
      goto LAB_1801eb7f7;
    }
  }
LAB_1801eb7f5:
  uVar8 = 0;
LAB_1801eb7f7:
  return uVar8 & 0xffffffff;
}

