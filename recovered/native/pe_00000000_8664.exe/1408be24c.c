/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408be24c */

undefined8 FUN_1408be24c(uint param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  
  uVar8 = (ulonglong)param_1;
  if (*(int *)(uVar8 + 0xc) == 0) {
    *(undefined4 *)(uVar8 + 0x10) = 0;
    *(undefined2 *)(uVar8 + 0x14) = 0;
    *(undefined1 *)(uVar8 + 0x16) = 0;
    *(undefined4 *)(uVar8 + 0x18) = 0;
    *(undefined4 *)(uVar8 + 0x1c) = 0;
    *(undefined4 *)(uVar8 + 0x20) = 0;
    *(undefined1 *)(uVar8 + 0x24) = 0;
    *(undefined4 *)(uVar8 + 0x28) = 0;
    if (*(char *)(ulonglong)*(uint *)(uVar8 + 8) != '\0') {
      iVar3 = FUN_1408c74a0();
      pbVar7 = (byte *)(ulonglong)*(uint *)(uVar8 + 8);
      if (iVar3 != 0) {
        *(undefined4 *)(uVar8 + 0x10) = 2;
        bVar1 = *pbVar7;
        while( true ) {
          pbVar5 = (byte *)(ulonglong)bVar1;
          iVar3 = FUN_1408c74a0(pbVar7);
          if (iVar3 == 0) break;
          *(int *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1;
          bVar1 = *(byte *)(ulonglong)*(uint *)(uVar8 + 8);
          pbVar7 = pbVar5;
        }
        return 1;
      }
      if (*pbVar7 == 0x25) {
        uVar4 = *(uint *)(uVar8 + 8) + 1;
        if (*(char *)(ulonglong)uVar4 != '%') {
          *(undefined4 *)(uVar8 + 0x10) = 4;
          *(uint *)(uVar8 + 8) = uVar4;
          if (*(char *)(ulonglong)uVar4 == '*') {
            *(undefined1 *)(uVar8 + 0x16) = 1;
            *(uint *)(uVar8 + 8) = uVar4;
          }
          cVar2 = FUN_1408be404(uVar8);
          if (cVar2 == '\0') {
            return 0;
          }
          FUN_1408be498(param_1);
          FUN_1408be5ad(uVar8);
          cVar2 = FUN_1408be5ec(uVar8);
          if (cVar2 == '\0') {
            return 0;
          }
          if (*(char *)((ulonglong)(uint)(*(int *)(uVar8 + 0x28) * 0xc) + 0x10324b08 +
                       (ulonglong)*(uint *)(uVar8 + 0x20)) == '\0') {
            *(undefined4 *)(uVar8 + 0x10) = 0;
            *(undefined2 *)(uVar8 + 0x14) = 0;
            *(undefined1 *)(uVar8 + 0x16) = 0;
            *(undefined4 *)(uVar8 + 0x18) = 0;
            *(undefined4 *)(uVar8 + 0x1c) = 0;
            *(undefined4 *)(uVar8 + 0x20) = 0;
            *(undefined1 *)(uVar8 + 0x24) = 0;
            *(undefined4 *)(uVar8 + 0x28) = 0;
            *(undefined4 *)(uVar8 + 0xc) = 0x16;
            return 0;
          }
          return 1;
        }
      }
      *(undefined4 *)(uVar8 + 0x10) = 3;
      *(byte *)(uVar8 + 0x14) = *pbVar7;
      *(uint *)(uVar8 + 8) = (uint)(*pbVar7 == 0x25) + param_4;
      uVar6 = FUN_1408be3b2(uVar8);
      return uVar6;
    }
    *(undefined4 *)(uVar8 + 0x10) = 1;
  }
  return 0;
}

