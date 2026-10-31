/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10271758 */

uint FUN_10271758(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int local_1c;
  int *local_18 [2];
  char local_10;
  undefined4 local_c;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  
  uVar4 = 0xffffffff;
  if (param_1 != 0xffffffff) {
    FUN_1025be8b(param_2);
    if (param_1 < 0x100) {
      uVar4 = (uint)*(byte *)(local_18[0][0x25] + (param_1 & 0xff));
      if (local_10 != '\0') {
        *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
      }
    }
    else {
      local_6 = 0;
      if ((local_18[0][1] < 2) ||
         (local_c = (int)param_1 >> 8, -1 < *(short *)(*local_18[0] + (local_c & 0xff) * 2))) {
        puVar1 = (undefined4 *)FUN_10268ffd();
        *puVar1 = 0x2a;
        uVar2 = 1;
        local_7 = 0;
        local_8 = (char)param_1;
      }
      else {
        uVar2 = 2;
        local_8 = (char)(param_1 >> 8);
        local_7 = (char)param_1;
      }
      local_c = local_c & 0xff000000;
      iVar3 = ___acrt_LCMapStringA
                        (local_18,local_18[0][0x2a],0x100,&local_8,uVar2,&local_c,3,local_18[0][2],1
                        );
      if (iVar3 != 0) {
        param_1 = local_c & 0xff;
        if (iVar3 != 1) {
          param_1 = (uint)CONCAT11((undefined1)local_c,local_c._1_1_);
        }
      }
      uVar4 = param_1;
      if (local_10 != '\0') {
        *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
      }
    }
  }
  return uVar4;
}

