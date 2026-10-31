/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a0a15 */

uint __cdecl FUN_004a0a15(uint param_1,ushort *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  HANDLE hFile;
  ushort *puVar3;
  ushort uVar4;
  ushort *puVar5;
  BOOL BVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  uint local_18;
  ushort *local_14;
  uint local_10;
  int local_c;
  ushort *local_8;
  
  local_c = (int)param_1 >> 6;
  iVar9 = (param_1 & 0x3f) * 0x38;
  iVar7 = (&DAT_00521cc8)[local_c];
  hFile = *(HANDLE *)(iVar7 + 0x18 + iVar9);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pbVar1 = (byte *)(iVar7 + 0x28 + iVar9);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  else {
    pbVar1 = (byte *)(iVar7 + 0x28 + iVar9);
    *pbVar1 = *pbVar1 | 4;
  }
  local_14 = param_2 + param_3;
  puVar8 = param_2;
  puVar3 = param_2;
  do {
    if (local_14 <= puVar3) {
LAB_004a0bc9:
      return (int)puVar8 - (int)param_2 & 0xfffffffe;
    }
    local_8._0_2_ = *puVar3;
    local_18 = (uint)(ushort)local_8;
    if (local_18 == 0x1a) {
      iVar7 = (param_1 & 0x3f) * 0x38;
      bVar2 = *(byte *)((&DAT_00521cc8)[local_c] + 0x28 + iVar7);
      if ((bVar2 & 0x40) == 0) {
        *(byte *)((&DAT_00521cc8)[local_c] + 0x28 + iVar7) = bVar2 | 2;
      }
      else {
        *puVar8 = (ushort)local_8;
LAB_004a0bc6:
        puVar8 = puVar8 + 1;
      }
      goto LAB_004a0bc9;
    }
    puVar5 = puVar3 + 1;
    if ((ushort)local_8 == 0xd) {
      if (local_14 <= puVar5) {
        local_10 = local_18;
        local_8 = puVar5;
        BVar6 = ReadFile(hFile,&local_8,2,&local_18,(LPOVERLAPPED)0x0);
        if ((BVar6 == 0) || (local_18 == 0)) {
LAB_004a0b9c:
          uVar4 = 0xd;
        }
        else {
          uVar4 = 10;
          if ((*(byte *)((&DAT_00521cc8)[local_c] + 0x28 + iVar9) & 0x48) == 0) {
            if (((ushort)local_8 != 10) || (puVar8 != param_2)) {
              FUN_0049cd94(param_1,0xfffffffe,0xffffffff,(PLARGE_INTEGER)0x1);
              if ((ushort)local_8 != 10) goto LAB_004a0b9c;
              goto LAB_004a0bc9;
            }
          }
          else if ((ushort)local_8 != 10) {
            *puVar8 = 0xd;
            *(char *)((&DAT_00521cc8)[local_c] + 0x2a + iVar9) = (char)local_8;
            *(char *)((&DAT_00521cc8)[local_c] + 0x2b + iVar9) = (char)((uint)local_8 >> 8);
            *(undefined1 *)((&DAT_00521cc8)[local_c] + 0x2c + iVar9) = 10;
            goto LAB_004a0bc6;
          }
        }
        *puVar8 = uVar4;
        goto LAB_004a0bc6;
      }
      if (*puVar5 == 10) {
        puVar5 = puVar3 + 2;
        local_8._0_2_ = 10;
      }
    }
    *puVar8 = (ushort)local_8;
    puVar8 = puVar8 + 1;
    puVar3 = puVar5;
  } while( true );
}

