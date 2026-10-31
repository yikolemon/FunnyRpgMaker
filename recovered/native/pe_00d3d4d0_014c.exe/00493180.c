/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00493180 */

uint __cdecl FUN_00493180(int param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  if (param_3 != 0) {
    iVar3 = param_1 - (int)param_2;
    do {
      if (((uint)param_2 & 3) == 0) {
        while ((((uint)(iVar3 + (int)param_2) & 0xfff) < 0xffd &&
               (uVar2 = *(uint *)(iVar3 + (int)param_2), uVar2 == *param_2))) {
          bVar4 = param_3 < 4;
          param_3 = param_3 - 4;
          if (bVar4 || param_3 == 0) {
            return 0;
          }
          param_2 = param_2 + 1;
          if ((~uVar2 & uVar2 + 0xfefefeff & 0x80808080) != 0) {
            return 0;
          }
        }
      }
      bVar1 = *(byte *)(iVar3 + (int)param_2);
      if (bVar1 != (byte)*param_2) {
        return -(uint)(bVar1 < (byte)*param_2) | 1;
      }
      if (bVar1 == 0) {
        return 0;
      }
      param_2 = (uint *)((int)param_2 + 1);
      bVar4 = param_3 != 0;
      param_3 = param_3 - 1;
    } while (bVar4 && param_3 != 0);
  }
  return 0;
}

