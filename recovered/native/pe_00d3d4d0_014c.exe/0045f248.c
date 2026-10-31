/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045f248 */

int __fastcall FUN_0045f248(uint *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_18;
  
  uVar1 = *param_1;
  local_18 = 0;
  if (uVar1 < param_2) {
    uVar3 = param_2 - uVar1;
    if ((uint)(param_4 * 2) < param_2 - uVar1) {
      uVar3 = param_4 * 2;
    }
    if (uVar3 == 0) {
      uVar7 = 0;
      local_18 = 0;
    }
    else {
      local_18 = 0;
      uVar6 = 0;
      uVar2 = 1;
      do {
        uVar4 = (uint)*(byte *)(uVar1 + uVar6);
        uVar5 = uVar2;
        if (((0x17 < uVar4 - 9) || ((0x80001bU >> (uVar4 - 9 & 0x1f) & 1) == 0)) && (uVar4 != 0)) {
          uVar7 = uVar6;
          if (((char)*(byte *)(uVar1 + uVar6) < '\0') || (0xf < (byte)(&DAT_004e6a78)[uVar4]))
          break;
          uVar5 = uVar2 << 4 | (uint)(byte)(&DAT_004e6a78)[uVar4];
          if ((uVar2 & 0x10) != 0) {
            *(char *)(param_3 + local_18) = (char)uVar5;
            local_18 = local_18 + 1;
            uVar5 = 1;
          }
        }
        uVar6 = uVar6 + 1;
        uVar2 = uVar5;
        uVar7 = uVar3;
      } while (uVar3 != uVar6);
      if (uVar5 != 1) {
        *(char *)(param_3 + local_18) = (char)uVar5 << 4;
        local_18 = local_18 + 1;
      }
    }
    *param_1 = uVar1 + uVar7;
  }
  return local_18;
}

