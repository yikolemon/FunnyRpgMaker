/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045461b */

void __fastcall FUN_0045461b(int *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  uint local_28;
  undefined1 *local_24;
  uint local_20;
  int local_1c;
  
  iVar7 = param_1[4];
  if (iVar7 != 0) {
    local_24 = (undefined1 *)*param_1;
    local_1c = param_1[2];
    bVar8 = true;
    local_28 = 0x80;
    local_20 = 0;
    bVar2 = false;
    uVar5 = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar6 = local_28;
      if (!bVar2) {
        do {
          if (bVar8) {
            if (param_3 <= param_2) {
              bVar8 = true;
              goto LAB_004546a1;
            }
            bVar1 = *param_2;
            param_2 = param_2 + 1;
            uVar5 = bVar1 & 0xf;
            bVar8 = false;
            uVar3 = (uint)(bVar1 >> 4);
          }
          else {
            bVar8 = true;
            uVar3 = uVar5;
          }
          uVar4 = 0;
        } while (uVar3 == 0);
      }
      uVar4 = uVar3;
      if (!bVar8) {
        uVar6 = 0;
      }
LAB_004546a1:
      local_20 = local_20 | uVar6;
      local_1c = local_1c + -1;
      if (local_1c == 0) {
        *local_24 = (char)local_20;
        local_24 = (undefined1 *)(*param_1 + param_1[1]);
        local_1c = param_1[2];
        *param_1 = (int)local_24;
        local_20 = 0;
        local_28 = 0x80;
      }
      else {
        local_28 = local_28 >> 1;
        if (local_28 == 0) {
          *local_24 = (char)local_20;
          local_24 = local_24 + 1;
          local_20 = 0;
          local_28 = 0x80;
        }
      }
      uVar3 = uVar4 - 1;
      bVar2 = 1 < (int)uVar4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    if (local_28 != 0x80) {
      *local_24 = (char)local_20;
    }
  }
  return;
}

