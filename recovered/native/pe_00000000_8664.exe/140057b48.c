/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140057b48 */

undefined8 * FUN_140057b48(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  longlong lVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  BOOL BVar6;
  HANDLE hObject;
  HANDLE hProcess;
  undefined8 ****ppppuVar7;
  short *psVar8;
  WCHAR local_4b8 [260];
  undefined8 ***local_2b0;
  ulonglong local_2a8 [70];
  DWORD local_74;
  undefined8 *local_70;
  undefined8 ***local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_68 = (undefined8 ****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 7;
  psVar8 = (short *)*param_2;
  psVar1 = psVar8 + param_2[1];
  local_70 = param_1;
  for (; psVar8 != psVar1; psVar8 = psVar8 + 1) {
    if ((*psVar8 == 0x5c) || (*psVar8 == 0x2f)) {
      local_2b0 = &local_68;
      if (7 < local_50) {
        local_2b0 = local_68;
      }
      local_2a8[0] = local_58;
      cVar4 = FUN_1400595f2(&local_2b0,&DAT_140edd064);
      if (cVar4 == '\0') {
        FUN_1400168f8(&local_68,0x5c);
      }
    }
    else {
      FUN_1400168f8(&local_68);
    }
  }
  local_2b0 = local_68;
  if (local_50 < 8) {
    local_2b0 = &local_68;
  }
  local_2a8[0] = local_58;
  cVar4 = FUN_1400595f2(&local_2b0,&DAT_140edd064);
  if (cVar4 != '\0') {
    ppppuVar7 = (undefined8 ****)local_68;
    if (local_50 < 8) {
      ppppuVar7 = &local_68;
    }
    lVar2 = local_58 * 2;
    local_58 = local_58 - 1;
    *(undefined2 *)((longlong)ppppuVar7 + lVar2 + -2) = 0;
  }
  *local_70 = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  hObject = (HANDLE)CreateToolhelp32Snapshot(2,0);
  if (hObject != (HANDLE)0xffffffffffffffff) {
    local_2b0 = (undefined8 ***)CONCAT44(local_2b0._4_4_,0x238);
    iVar5 = Process32FirstW(hObject);
    if (iVar5 != 0) {
      do {
        if (((local_2a8[0] & 0xfffffffb) != 0) &&
           (hProcess = OpenProcess(0x1000,0,(DWORD)local_2a8[0]), hProcess != (HANDLE)0x0)) {
          FUN_1401c5830(local_4b8,0,0x208);
          local_74 = 0x104;
          BVar6 = QueryFullProcessImageNameW(hProcess,0,local_4b8,&local_74);
          if (BVar6 != 0) {
            ppppuVar7 = &local_68;
            if (7 < local_50) {
              ppppuVar7 = (undefined8 ****)local_68;
            }
            iVar5 = FUN_1401a0500(local_4b8,ppppuVar7);
            if (iVar5 == 0) {
              puVar3 = (undefined4 *)local_70[1];
              if (puVar3 == (undefined4 *)local_70[2]) {
                FUN_140059636(local_70,puVar3,local_2a8);
              }
              else {
                *puVar3 = (DWORD)local_2a8[0];
                local_70[1] = local_70[1] + 4;
              }
            }
          }
          CloseHandle(hProcess);
        }
        iVar5 = Process32NextW(hObject);
      } while (iVar5 != 0);
    }
    CloseHandle(hObject);
  }
  FUN_140001e90(&local_68);
  return local_70;
}

