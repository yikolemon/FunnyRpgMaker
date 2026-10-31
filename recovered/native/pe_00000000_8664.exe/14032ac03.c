/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032ac03 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14032ac03(void)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  float fStack_30;
  float fStack_2c;
  ulonglong local_20;
  
  lVar2 = DAT_14062a630;
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  lVar4 = FUN_140322dc0(
                       "Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\WolfDataBase.hpp"
                       );
  if ((lVar4 == 0) || (*(char *)(lVar2 + 0x138) == '\0')) {
    fStack_30 = (_UNK_1404efd48 - *(float *)(lVar2 + 0xf30)) * _UNK_1404efd58 +
                *(float *)(lVar2 + 0xf30);
    fStack_2c = (_UNK_1404efd4c - *(float *)(lVar2 + 0xf34)) * _UNK_1404efd5c +
                *(float *)(lVar2 + 0xf34);
    local_38 = CONCAT44((_UNK_1404efd44 - *(float *)(lVar2 + 0xf2c)) * _UNK_1404efd54 +
                        *(float *)(lVar2 + 0xf2c),
                        (_DAT_1404efd40 - *(float *)(lVar2 + 0xf28)) * _DAT_1404efd50 +
                        *(float *)(lVar2 + 0xf28));
    FUN_1403129c9(4);
  }
  else {
    cVar1 = *(char *)(lVar4 + 0x10a);
    fStack_30 = (_UNK_1404efd48 - *(float *)(lVar2 + 0xf30)) * _UNK_1404efd58 +
                *(float *)(lVar2 + 0xf30);
    fStack_2c = (_UNK_1404efd4c - *(float *)(lVar2 + 0xf34)) * _UNK_1404efd5c +
                *(float *)(lVar2 + 0xf34);
    local_38 = CONCAT44((_UNK_1404efd44 - *(float *)(lVar2 + 0xf2c)) * _UNK_1404efd54 +
                        *(float *)(lVar2 + 0xf2c),
                        (_DAT_1404efd40 - *(float *)(lVar2 + 0xf28)) * _DAT_1404efd50 +
                        *(float *)(lVar2 + 0xf28));
    FUN_1403129c9(4);
    if (cVar1 == '\x01') {
      local_38 = 0;
      FUN_140327f5b(lVar2 + 0x2a98,0);
    }
  }
  uVar3 = FUN_14031df36("Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\WolfDataBase.hpp"
                        ,0,0x200016f);
  FUN_140312af5(1);
  if ((char)uVar3 == '\0') {
    FUN_140320dd0();
  }
  else if (*(short *)(*(longlong *)(lVar2 + 0x1608) + 0x118) == 1) {
    FUN_1403495c1(
                 "PO+esfZadvep87Xqe9a693nXWeta73/2evaeHEMbh7xHjuMLHED1txDimcDSPHjrhue9ZF/Eu4okR6FIlMVD/bdqUj/hCQnUOXkrkKea1itSIz0bFcXgmkXuY1ypShbcqosniTYTfY6P5sO7F7AT+VtFEeKuCUhfvhEciNY/x5QWtTHRrMQvvMuhvFmNNR0w/2o74FrZ8Bd/BB3AJrMMBnB+g889jo2hb+DN29tMQEzbSbIMxzMRhycUEPyWv0tFi+tG28G9seRMKb/thOxGuYnw3FI9oHsIomgh38Res+DrC+4wvhSVu0/H2Y8I+mli67MK3EoorNF9hFHHh0Z8Ef+MGRmgQV/PTGbCEB5woLkyXnUW/akyTY8WAh/SwxeVgo4jBnvjoL1xv4ZsIFfoTX4kfdC5D89V0OUhfi+lhHb29UHhI17AfZRPhpsIGVjSyg2gqfcJfxVMuXkJhulRTqRxbRMfDeUgPy2UcTYTHV4t7PuKySmDCeprtsIQvcN4Fr4c+lE6SuYS7112a79A0UaiWy7CJxruECTdoah9K/JPIKbxa0xW+YlJBCIewc+AXeAsmIafwak1fg7odcAHcD8UdGsssZjhyCleNEbUi2T9KsxV6gOSHkvmTyC3cEmpVcnO/kvyLt4Y/Z+AxTEYT4ZtZ/SKs+/68gH8t/BuWOcudEfYN8Egx4Rr2M0xGE+H+ZZ9kh7rvz9P4fS3F9KGs6ZZBH1Afyut9s4YMNBE+ZMmh7mpNd/I/PZT+QKYKf89kK4G1N4Vzmf8ExnAWR7mOeW4KMZSOVOHpK2aa2QnPFOjeNl3Ee6HI1OkininQvW26iPdCkanTJOKZpNVvo3C/qn1bGyVO/AEAAP//SBpBQgAAAAZJREFUAwAZ8c2vF0h95gAAAABJRU5ErkJggg=="
                 );
    FUN_14032ae1d(*(undefined8 *)(lVar2 + 0x1608));
    FUN_14032aea6(*(undefined8 *)(lVar2 + 0x1608));
    FUN_140327e9b(&local_38);
    *(undefined8 *)(lVar2 + 0x2a98) = local_38;
  }
  if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_20 ^ (ulonglong)auStack_58);
}

