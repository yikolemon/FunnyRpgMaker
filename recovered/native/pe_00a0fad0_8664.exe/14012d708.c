/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012d708 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14012d708(DWORD *param_1,uint param_2,short *param_3,ulonglong param_4)

{
  short sVar1;
  HANDLE hFile;
  uint nNumberOfBytesToWrite;
  BOOL BVar2;
  DWORD DVar3;
  short *psVar4;
  short *psVar5;
  undefined1 auStackY_1468 [32];
  DWORD local_1438 [4];
  short local_1428 [2560];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14012d720;
  local_28 = DAT_1401c9640 ^ (ulonglong)auStackY_1468;
  psVar5 = (short *)((param_4 & 0xffffffff) + (longlong)param_3);
  hFile = *(HANDLE *)
           ((&DAT_1403551e0)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (psVar5 <= param_3) break;
    psVar4 = local_1428;
    do {
      if (psVar5 <= param_3) break;
      sVar1 = *param_3;
      param_3 = param_3 + 1;
      if (sVar1 == 10) {
        param_1[2] = param_1[2] + 2;
        *psVar4 = 0xd;
        psVar4 = psVar4 + 1;
      }
      *psVar4 = sVar1;
      psVar4 = psVar4 + 1;
    } while (psVar4 < local_1428 + 0x9ff);
    local_1438[0] = 0;
    nNumberOfBytesToWrite = (int)((longlong)psVar4 - (longlong)local_1428 >> 1) * 2;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *param_1 = DVar3;
      break;
    }
    param_1[1] = param_1[1] + local_1438[0];
  } while (nNumberOfBytesToWrite <= local_1438[0]);
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_28 ^ (ulonglong)auStackY_1468);
}

