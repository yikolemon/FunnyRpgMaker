/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101efef8 */

int __fastcall FUN_101efef8(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_18;
  
  puVar1 = *(uint **)(param_1 + 0x214);
  if (puVar1 == (uint *)0x0) {
    iVar6 = 6;
  }
  else {
    local_18 = *puVar1;
    uVar10 = puVar1[1];
    if (param_2 < puVar1[1]) {
      uVar10 = param_2;
    }
    if (local_18 == 0) {
      iVar6 = -1;
    }
    else {
      cVar4 = '\0';
      uVar7 = 0;
      do {
        uVar8 = 0x10000;
        if (puVar1[1] != 0) {
          uVar9 = 0;
          do {
            if (uVar9 < uVar10) {
              uVar2 = *(uint *)(param_3 + uVar9 * 4);
              uVar5 = 0x10000 - uVar2;
              if ((uVar7 >> (uVar9 & 0x1f) & 1) != 0) {
                uVar5 = uVar2;
              }
              if ((int)uVar5 < 1) {
                uVar8 = 0;
                break;
              }
              if (uVar5 < 0x10000) {
                lVar3 = (ulonglong)uVar5 * (ulonglong)uVar8 + 0x8000;
                uVar8 = (int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10;
              }
            }
            else {
              uVar8 = uVar8 >> 1;
            }
            uVar9 = uVar9 + 1;
          } while (puVar1[1] != uVar9);
        }
        if (*(uint *)(puVar1[0x22] + uVar7 * 4) != uVar8) {
          *(uint *)(puVar1[0x22] + uVar7 * 4) = uVar8;
          local_18 = *puVar1;
          cVar4 = '\x01';
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < local_18);
      iVar6 = (int)(char)(cVar4 + -1);
    }
  }
  return iVar6;
}

