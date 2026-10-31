/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fc435 */

int FUN_1801fc435(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  
  puVar2 = *(uint **)(param_1 + 0x2e0);
  if (puVar2 == (uint *)0x0) {
    iVar9 = 6;
  }
  else {
    uVar3 = *puVar2;
    if (uVar3 != 0) {
      uVar5 = puVar2[1];
      if (uVar5 <= param_2) {
        param_2 = uVar5;
      }
      uVar7 = 0;
      cVar8 = '\0';
      do {
        iVar9 = 0x10000;
        if (uVar5 != 0) {
          uVar10 = 0x10000;
          uVar6 = 0;
          do {
            if (uVar6 < param_2) {
              uVar1 = *(uint *)(param_3 + uVar6 * 4);
              uVar4 = 0x10000 - uVar1;
              if (((uint)uVar7 >> ((uint)uVar6 & 0x1f) & 1) != 0) {
                uVar4 = uVar1;
              }
              if ((int)uVar4 < 1) {
                iVar9 = 0;
                break;
              }
              if (uVar4 < 0x10000) {
                uVar10 = (ulonglong)uVar4 * (uVar10 & 0xffffffff) + 0x8000 >> 0x10;
              }
            }
            else {
              uVar10 = uVar10 >> 1 & 0x7fffffff;
            }
            iVar9 = (int)uVar10;
            uVar6 = uVar6 + 1;
          } while (uVar5 != uVar6);
        }
        if (*(int *)(*(longlong *)(puVar2 + 0x42) + uVar7 * 4) != iVar9) {
          *(int *)(*(longlong *)(puVar2 + 0x42) + uVar7 * 4) = iVar9;
          uVar3 = *puVar2;
          cVar8 = '\x01';
        }
        uVar7 = uVar7 + 1;
        if (uVar3 <= uVar7) {
          return (int)(char)(cVar8 + -1);
        }
        uVar5 = puVar2[1];
      } while( true );
    }
    iVar9 = -1;
  }
  return iVar9;
}

