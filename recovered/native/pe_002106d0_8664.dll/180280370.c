/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180280370 */

undefined8 FUN_180280370(wchar_t *param_1,int *param_2)

{
  char cVar1;
  ushort uVar2;
  undefined4 *puVar3;
  HANDLE hObject;
  undefined8 uVar4;
  int local_res10 [2];
  undefined4 uVar5;
  
  if (param_2 != (int *)0x0) {
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    if (param_1 != (wchar_t *)0x0) {
      uVar5 = 0;
      hObject = CreateFileW(param_1,0x80,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x2000000,(HANDLE)0x0);
      if (hObject == (HANDLE)0xffffffffffffffff) {
        cVar1 = FUN_1802801c8(param_1);
        if (cVar1 == '\0') {
          FUN_18027e6b4(2);
        }
        else {
          uVar2 = convert_to_stat_mode(0x10,param_1);
          local_res10[0] = 0;
          *(ushort *)((longlong)param_2 + 6) = uVar2;
          *(undefined2 *)(param_2 + 2) = 1;
          cVar1 = FUN_180280168(param_1,local_res10);
          if (cVar1 != '\0') {
            param_2[4] = local_res10[0] + -1;
            *param_2 = local_res10[0] + -1;
            uVar4 = thunk_FUN_180298cb0(0x7bc,1,1,0,0,0,CONCAT44(uVar5,0xffffffff));
            *(undefined8 *)(param_2 + 8) = uVar4;
            *(undefined8 *)(param_2 + 6) = uVar4;
            *(undefined8 *)(param_2 + 10) = uVar4;
            return 0;
          }
        }
        param_2[0] = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[8] = 0;
        param_2[9] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        return 0xffffffff;
      }
      cVar1 = FUN_1802804c4(param_1,0xffffffff,hObject,param_2);
      if (cVar1 == '\0') {
        param_2[0] = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[8] = 0;
        param_2[9] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        CloseHandle(hObject);
        return 0xffffffff;
      }
      CloseHandle(hObject);
      return 0;
    }
  }
  puVar3 = (undefined4 *)FUN_18027e690();
  *puVar3 = 0;
  puVar3 = (undefined4 *)FUN_18027e66c();
  *puVar3 = 0x16;
  FUN_180290a50();
  return 0xffffffff;
}

