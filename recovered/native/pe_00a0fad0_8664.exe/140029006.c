/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140029006 */

void FUN_140029006(undefined8 *param_1)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint *puVar5;
  longlong lVar6;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  puVar5 = (uint *)*param_1;
  puVar2 = (uint *)param_1[1];
  if (puVar5 != puVar2) {
    do {
      puVar3 = puVar5;
      if (0xf < *(ulonglong *)(puVar5 + 6)) {
        puVar3 = *(uint **)puVar5;
      }
      uVar4 = *(ulonglong *)(puVar5 + 4);
      bVar1 = (byte)*puVar3;
      if ((bVar1 == 0x22) && (*(byte *)((longlong)puVar3 + (uVar4 - 1)) == 0x22)) {
        if (1 < uVar4) {
          *(ulonglong *)(puVar5 + 4) = uVar4 - 1;
          *(byte *)((longlong)puVar3 + (uVar4 - 1)) = 0;
          puVar3 = puVar5;
          if (0xf < *(ulonglong *)(puVar5 + 6)) {
            puVar3 = *(uint **)puVar5;
          }
          uVar4 = (ulonglong)(*(longlong *)(puVar5 + 4) != 0);
          lVar6 = *(longlong *)(puVar5 + 4) - uVar4;
          FUN_140135ff0(puVar3,(byte *)(uVar4 + (longlong)puVar3),lVar6 + 1);
          *(longlong *)(puVar5 + 4) = lVar6;
        }
        FUN_14000e389(&local_58,puVar5);
        if (puVar5 != &local_58) {
          FUN_1400065bc(puVar5);
          *(undefined8 *)(puVar5 + 4) = local_48;
          *(undefined8 *)(puVar5 + 6) = uStack_40;
          *puVar5 = local_58;
          puVar5[1] = uStack_54;
          puVar5[2] = uStack_50;
          puVar5[3] = uStack_4c;
          local_48 = 0;
          uStack_40 = 0xf;
          local_58 = local_58 & 0xffffff00;
        }
        FUN_1400017de(&local_58);
      }
      else if ((1 < uVar4) &&
              (((bVar1 - 0x22 < 0x3f &&
                ((0x4000000000000021U >> ((ulonglong)(bVar1 - 0x22) & 0x3f) & 1) != 0)) &&
               (bVar1 == *(byte *)((longlong)puVar3 + (uVar4 - 1)))))) {
        *(ulonglong *)(puVar5 + 4) = uVar4 - 1;
        *(byte *)((longlong)puVar3 + (uVar4 - 1)) = 0;
        puVar3 = puVar5;
        if (0xf < *(ulonglong *)(puVar5 + 6)) {
          puVar3 = *(uint **)puVar5;
        }
        uVar4 = (ulonglong)(*(longlong *)(puVar5 + 4) != 0);
        lVar6 = *(longlong *)(puVar5 + 4) - uVar4;
        FUN_140135ff0(puVar3,(byte *)(uVar4 + (longlong)puVar3),lVar6 + 1);
        *(longlong *)(puVar5 + 4) = lVar6;
      }
      puVar5 = puVar5 + 8;
    } while (puVar5 != puVar2);
  }
  return;
}

