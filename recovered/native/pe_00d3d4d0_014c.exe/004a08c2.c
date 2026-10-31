/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a08c2 */

int __cdecl FUN_004a08c2(uint param_1,char *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  HANDLE hFile;
  char *pcVar3;
  BOOL BVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *local_14;
  undefined4 local_10;
  char *local_c;
  char local_5;
  
  iVar6 = (int)param_1 >> 6;
  iVar9 = (param_1 & 0x3f) * 0x38;
  iVar7 = (&DAT_00521cc8)[iVar6];
  hFile = *(HANDLE *)(iVar9 + 0x18 + iVar7);
  if ((param_3 == 0) || (*param_2 != '\n')) {
    pbVar1 = (byte *)(iVar9 + 0x28 + iVar7);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  else {
    pbVar1 = (byte *)(iVar9 + 0x28 + iVar7);
    *pbVar1 = *pbVar1 | 4;
  }
  local_14 = param_2 + param_3;
  pcVar8 = param_2;
  pcVar3 = param_2;
joined_r0x004a0914:
  if (local_14 <= pcVar3) {
LAB_004a0a0c:
    return (int)pcVar8 - (int)param_2;
  }
  cVar5 = *pcVar3;
  if (cVar5 == '\x1a') {
    iVar7 = (param_1 & 0x3f) * 0x38;
    bVar2 = *(byte *)((&DAT_00521cc8)[iVar6] + 0x28 + iVar7);
    if ((bVar2 & 0x40) == 0) {
      *(byte *)((&DAT_00521cc8)[iVar6] + 0x28 + iVar7) = bVar2 | 2;
      goto LAB_004a0a0c;
    }
    *pcVar8 = '\x1a';
LAB_004a0a0b:
    pcVar8 = pcVar8 + 1;
    goto LAB_004a0a0c;
  }
  local_c = pcVar3 + 1;
  if (cVar5 == '\r') {
    if (local_14 <= local_c) {
      BVar4 = ReadFile(hFile,&local_5,1,(LPDWORD)&local_14,(LPOVERLAPPED)0x0);
      if ((BVar4 != 0) && (local_14 != (char *)0x0)) {
        if ((*(byte *)((&DAT_00521cc8)[iVar6] + 0x28 + iVar9) & 0x48) == 0) {
          if ((local_5 != '\n') || (pcVar8 != param_2)) {
            FUN_0049cd94(param_1,0xffffffff,0xffffffff,(PLARGE_INTEGER)0x1);
            if (local_5 != '\n') goto LAB_004a09e2;
            goto LAB_004a0a0c;
          }
        }
        else if (local_5 != '\n') {
          *pcVar8 = '\r';
          *(char *)((&DAT_00521cc8)[iVar6] + 0x2a + iVar9) = local_5;
          goto LAB_004a0a0b;
        }
        *pcVar8 = '\n';
        goto LAB_004a0a0b;
      }
LAB_004a09e2:
      *pcVar8 = '\r';
      goto LAB_004a0a0b;
    }
    if (*local_c == '\n') {
      local_c = pcVar3 + 2;
      cVar5 = '\n';
    }
  }
  *pcVar8 = cVar5;
  local_10 = 1;
  pcVar8 = pcVar8 + 1;
  pcVar3 = local_c;
  goto joined_r0x004a0914;
}

