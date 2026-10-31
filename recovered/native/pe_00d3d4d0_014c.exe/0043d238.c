/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043d238 */

int __cdecl FUN_0043d238(int param_1,uint param_2,uint *param_3,uint *param_4,uint param_5)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_20;
  piVar1 = *(int **)(param_1 + 0x68);
  iVar8 = piVar1[7];
  local_18 = FUN_00420696((int)piVar1,param_2);
  iVar6 = local_18;
  if (local_18 != 0) goto LAB_0043d2fe;
  cVar2 = FUN_00420d96(piVar1,&local_18);
  iVar6 = local_18;
  if ((local_18 != 0) || (bVar3 = FUN_00420d96(piVar1,&local_18), iVar6 = local_18, local_18 != 0))
  goto LAB_0043d2fe;
  if (cVar2 == '\x01') {
    uVar7 = FUN_004209e8(piVar1,&local_18);
LAB_0043d2c1:
    *param_3 = uVar7;
    iVar6 = local_18;
    if (local_18 != 0) goto LAB_0043d2fe;
    if (bVar3 < 0x40) {
      iVar9 = (bVar3 >> 4) + 1;
      local_1c = bVar3 & 0xf;
      local_20 = 2 << (sbyte)local_1c;
      if (uVar7 * iVar9 < param_5 || uVar7 * iVar9 - param_5 == 0) {
        uVar7 = FUN_0041c6b3(iVar8,4,0,uVar7,0,&local_18);
        param_3[2] = uVar7;
        iVar6 = local_18;
        if (local_18 != 0) goto LAB_0043d2fe;
        uVar7 = FUN_0041c6b3(iVar8,4,0,*param_3,0,&local_18);
        param_3[1] = uVar7;
        iVar6 = local_18;
        if (local_18 != 0) goto LAB_0043d2fe;
        local_18 = FUN_00420be1(piVar1,*param_3 * iVar9);
        if (local_18 == 0) {
          if (*param_3 != 0) {
            local_1c = local_1c + 1;
            local_20 = local_20 - 1;
            iVar8 = piVar1[8];
            uVar7 = 0;
            do {
              iVar6 = 0;
              uVar10 = 0;
              do {
                uVar10 = uVar10 << 8 | (uint)*(byte *)(iVar8 + iVar6);
                iVar6 = iVar6 + 1;
              } while (iVar9 != iVar6);
              if (uVar10 == 0xffffffff) {
                *(undefined4 *)(param_3[1] + uVar7 * 4) = 0xffff;
                uVar10 = 0xffff;
              }
              else {
                uVar5 = uVar10 >> ((byte)local_1c & 0x1f);
                if (*param_4 <= uVar5) goto LAB_0043d2f9;
                *(uint *)(param_3[1] + uVar7 * 4) = uVar5;
                uVar10 = uVar10 & local_20;
                if (*(uint *)(param_4[1] + uVar5 * 0x14) <= uVar10) goto LAB_0043d2f9;
              }
              iVar8 = iVar8 + iVar9;
              *(uint *)(param_3[2] + uVar7 * 4) = uVar10;
              uVar7 = uVar7 + 1;
            } while (uVar7 < *param_3);
          }
          FUN_00420cde(piVar1);
          iVar6 = local_18;
          goto LAB_0043d2fe;
        }
      }
    }
  }
  else if (cVar2 == '\0') {
    uVar4 = FUN_0042070a(piVar1,&local_18);
    uVar7 = (uint)uVar4;
    goto LAB_0043d2c1;
  }
LAB_0043d2f9:
  iVar6 = 8;
LAB_0043d2fe:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_20);
  }
  return iVar6;
}

