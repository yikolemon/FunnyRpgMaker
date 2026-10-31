/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140038df5 */

ulonglong FUN_140038df5(ushort *param_1,ushort *param_2)

{
  ushort *puVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined2 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ushort *puVar9;
  undefined8 unaff_RSI;
  ulonglong uVar10;
  ushort uVar11;
  ushort *puVar12;
  
  puVar12 = param_1 + 3;
  if (puVar12 <= param_2) {
    uVar7 = (ulonglong)((uint)(byte)param_1[2] * 0x200 + (uint)*(byte *)((longlong)param_1 + 5) * 2)
    ;
    puVar1 = (ushort *)((longlong)puVar12 + uVar7);
    if (puVar1 <= param_2) {
      uVar10 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      if (uVar7 != 0) {
        uVar3 = *param_1 << 8 | *param_1 >> 8;
        uVar5 = 0;
        do {
          puVar9 = (ushort *)
                   ((longlong)param_1 +
                   (ulonglong)(byte)*puVar12 * 0x100 + (ulonglong)*(byte *)((longlong)puVar12 + 1));
          uVar11 = uVar3;
          if (uVar3 == 7) {
            if (((param_2 < puVar9 + 4) || ((ushort)(*puVar9 << 8 | *puVar9 >> 8) != 1)) ||
               ((uVar4 = puVar9[1] << 8 | puVar9[1] >> 8, uVar11 = uVar4, uVar5 != 0 &&
                (uVar11 = uVar5, uVar5 != uVar4)))) goto LAB_140038e29;
            puVar9 = (ushort *)
                     ((longlong)puVar9 +
                     (ulonglong)*(byte *)((longlong)puVar9 + 7) +
                     (ulonglong)(byte)puVar9[3] * 0x100 +
                     (ulonglong)*(byte *)((longlong)puVar9 + 5) * 0x10000 +
                     (ulonglong)(byte)puVar9[2] * 0x1000000);
          }
          if (param_2 < puVar9 + 3) goto LAB_140038e29;
          uVar5 = *puVar9 << 8 | *puVar9 >> 8;
          if (uVar11 == 3) {
            if (uVar5 != 1) goto LAB_140038e29;
            uVar8 = FUN_140038fdb((longlong)puVar9,param_2);
            cVar2 = (char)uVar8;
          }
          else {
            if (uVar11 != 1) goto LAB_140038e29;
            if (uVar5 == 2) {
              uVar6 = FUN_140038f55((longlong)puVar9,param_2);
              cVar2 = (char)uVar6;
            }
            else {
              if (uVar5 != 1) goto LAB_140038e29;
              cVar2 = FUN_140038f3b((longlong)puVar9,param_2);
            }
          }
          if (cVar2 == '\0') goto LAB_140038e29;
          puVar12 = puVar12 + 1;
          uVar5 = uVar11;
        } while (puVar12 < puVar1);
      }
      goto LAB_140038e2b;
    }
  }
LAB_140038e29:
  uVar10 = 0;
LAB_140038e2b:
  return uVar10 & 0xffffffff;
}

