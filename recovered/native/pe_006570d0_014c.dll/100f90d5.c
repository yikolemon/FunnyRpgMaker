/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f90d5 */

int FUN_100f90d5(uint *param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uint local_28;
  char local_20;
  char local_1c;
  char local_18;
  
  uVar4 = (uint)*param_2;
  uVar2 = (uint)(*param_2 >> 3);
  iVar6 = (int)(char)(&DAT_102b8058)[uVar2];
  iVar3 = iVar6 + (uint)((0x80ff0000U >> uVar2 & 1) != 0);
  pbVar7 = param_2 + iVar3;
  if (param_3 != (byte *)0x0) {
    pbVar7 = param_3;
  }
  uVar2 = 0;
  if (pbVar7 <= param_2) {
    uVar4 = 0;
  }
  if (param_2 + 1 < pbVar7) {
    uVar2 = (uint)param_2[1];
  }
  if (param_2 + 2 < pbVar7) {
    uVar1 = (uint)param_2[2];
  }
  else {
    uVar1 = 0;
  }
  if (param_2 + 3 < pbVar7) {
    local_28 = (uint)param_2[3];
  }
  else {
    local_28 = 0;
  }
  uVar5 = (local_28 & 0x3f |
          (uVar1 & 0x3f) << 6 |
          (uVar2 & 0x3f) << 0xc | (uVar4 & *(uint *)(&DAT_102b8078 + iVar6 * 4)) << 0x12) >>
          ((&DAT_102b80a0)[iVar6 * 4] & 0x1f);
  *param_1 = uVar5;
  if ((((uVar1 >> 6) * 4 + (uVar2 >> 2 & 0xfffffff0) | (uint)((byte)local_28 >> 6) |
        (uint)(uVar5 < *(uint *)(&DAT_102b808c + iVar6 * 4)) << 6 | (uint)(0xffff < uVar5) << 8 |
       (uint)((uVar5 & 0x7ffff800) == 0xd800) << 7) ^ 0x2a) >> ((&DAT_102b80b4)[iVar6 * 4] & 0x1f)
      != 0) {
    local_20 = (char)uVar2;
    local_1c = (char)uVar4;
    local_18 = (char)uVar1;
    iVar3 = FUN_100fa683(iVar3,((((uint)(local_20 != '\0') - (uint)(local_1c == '\0')) -
                                (uint)(local_18 == '\0')) + 3) - (uint)((byte)local_28 == 0));
    *param_1 = 0xfffd;
  }
  return iVar3;
}

