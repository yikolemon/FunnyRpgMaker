/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049f680 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_0049f680(DWORD *param_1,uint param_2,char *param_3,int param_4)

{
  char cVar1;
  char *hFile;
  BOOL BVar2;
  DWORD DVar3;
  char *pcVar4;
  char *pcVar5;
  char *local_140c;
  char local_1408 [5120];
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  hFile = *(char **)((&DAT_00521cc8)[(int)param_2 >> 6] + 0x18 + (param_2 & 0x3f) * 0x38);
  pcVar4 = param_3 + param_4;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_140c = hFile;
  do {
    if (pcVar4 <= param_3) break;
    pcVar5 = local_1408;
    do {
      if (pcVar4 <= param_3) break;
      cVar1 = *param_3;
      param_3 = param_3 + 1;
      if (cVar1 == '\n') {
        param_1[2] = param_1[2] + 1;
        *pcVar5 = '\r';
        pcVar5 = pcVar5 + 1;
      }
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 < local_1408 + 0x13ff);
    BVar2 = WriteFile(hFile,local_1408,(DWORD)(pcVar5 + -(int)local_1408),(LPDWORD)&local_140c,
                      (LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *param_1 = DVar3;
      break;
    }
    param_1[1] = (DWORD)(local_140c + param_1[1]);
  } while (pcVar5 + -(int)local_1408 <= local_140c);
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

