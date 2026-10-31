/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00485b20 */

uint * __cdecl FUN_00485b20(uint *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_3 == 0) {
    return (uint *)0x0;
  }
  uVar6 = (uint)param_2;
  while (((uint)param_1 & 3) != 0) {
    uVar2 = *param_1;
    param_1 = (uint *)((int)param_1 + 1);
    if ((byte)uVar2 == param_2) goto LAB_00485bb6;
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return (uint *)0x0;
    }
  }
  uVar2 = param_3 - 4;
  if (3 < param_3) {
    uVar6 = uVar6 * 0x1010101;
    puVar4 = param_1;
    do {
      param_1 = puVar4 + 1;
      if (((*puVar4 ^ uVar6 ^ 0xffffffff ^ (*puVar4 ^ uVar6) + 0x7efefeff) & 0x81010100) != 0) {
        uVar1 = *puVar4;
        cVar5 = (char)uVar6;
        if ((char)uVar1 == cVar5) {
          return puVar4;
        }
        if ((char)(uVar1 >> 8) == cVar5) {
          return (uint *)((int)puVar4 + 1);
        }
        if ((char)(uVar1 >> 0x10) == cVar5) {
          return (uint *)((int)puVar4 + 2);
        }
        if ((char)(uVar1 >> 0x18) == cVar5) goto LAB_00485bb6;
      }
      bVar7 = 3 < uVar2;
      uVar2 = uVar2 - 4;
      puVar4 = param_1;
    } while (bVar7);
  }
  iVar3 = uVar2 + 4;
  while( true ) {
    if (iVar3 == 0) {
      return (uint *)0x0;
    }
    uVar2 = *param_1;
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar2 == (char)uVar6) break;
    iVar3 = iVar3 + -1;
  }
LAB_00485bb6:
  return (uint *)((int)param_1 + -1);
}

