/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004384bd */

void __fastcall FUN_004384bd(int param_1)

{
  int iVar1;
  undefined4 *_Dst;
  HMODULE hModule;
  FARPROC pFVar2;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x38) = 0;
  _Dst = FUN_0041c507(iVar1,0x88,&local_18);
  if (local_18 == 0) {
    _memset(_Dst,0,0x88);
    hModule = LoadLibraryA("libharfbuzz-0.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar2 = GetProcAddress(hModule,"hb_version_atleast");
      if (pFVar2 != (FARPROC)0x0) {
        pFVar2 = GetProcAddress(hModule,"hb_blob_create");
        *_Dst = pFVar2;
        if (pFVar2 != (FARPROC)0x0) {
          pFVar2 = GetProcAddress(hModule,"hb_blob_destroy");
          _Dst[1] = pFVar2;
          if (pFVar2 != (FARPROC)0x0) {
            pFVar2 = GetProcAddress(hModule,"hb_buffer_add_utf8");
            _Dst[2] = pFVar2;
            if (pFVar2 != (FARPROC)0x0) {
              pFVar2 = GetProcAddress(hModule,"hb_buffer_clear_contents");
              _Dst[3] = pFVar2;
              if (pFVar2 != (FARPROC)0x0) {
                pFVar2 = GetProcAddress(hModule,"hb_buffer_create");
                _Dst[4] = pFVar2;
                if (pFVar2 != (FARPROC)0x0) {
                  pFVar2 = GetProcAddress(hModule,"hb_buffer_destroy");
                  _Dst[5] = pFVar2;
                  if (pFVar2 != (FARPROC)0x0) {
                    pFVar2 = GetProcAddress(hModule,"hb_buffer_get_glyph_infos");
                    _Dst[6] = pFVar2;
                    if (pFVar2 != (FARPROC)0x0) {
                      pFVar2 = GetProcAddress(hModule,"hb_buffer_get_glyph_positions");
                      _Dst[7] = pFVar2;
                      if (pFVar2 != (FARPROC)0x0) {
                        pFVar2 = GetProcAddress(hModule,"hb_buffer_get_length");
                        _Dst[8] = pFVar2;
                        if (pFVar2 != (FARPROC)0x0) {
                          pFVar2 = GetProcAddress(hModule,"hb_buffer_guess_segment_properties");
                          _Dst[9] = pFVar2;
                          if (pFVar2 != (FARPROC)0x0) {
                            pFVar2 = GetProcAddress(hModule,"hb_face_create");
                            _Dst[10] = pFVar2;
                            if (pFVar2 != (FARPROC)0x0) {
                              pFVar2 = GetProcAddress(hModule,"hb_face_create_for_tables");
                              _Dst[0xb] = pFVar2;
                              if (pFVar2 != (FARPROC)0x0) {
                                pFVar2 = GetProcAddress(hModule,"hb_face_destroy");
                                _Dst[0xc] = pFVar2;
                                if (pFVar2 != (FARPROC)0x0) {
                                  pFVar2 = GetProcAddress(hModule,"hb_face_set_index");
                                  _Dst[0xd] = pFVar2;
                                  if (pFVar2 != (FARPROC)0x0) {
                                    pFVar2 = GetProcAddress(hModule,"hb_face_set_upem");
                                    _Dst[0xe] = pFVar2;
                                    if (pFVar2 != (FARPROC)0x0) {
                                      pFVar2 = GetProcAddress(hModule,"hb_font_create");
                                      _Dst[0xf] = pFVar2;
                                      if (pFVar2 != (FARPROC)0x0) {
                                        pFVar2 = GetProcAddress(hModule,"hb_font_destroy");
                                        _Dst[0x10] = pFVar2;
                                        if (pFVar2 != (FARPROC)0x0) {
                                          pFVar2 = GetProcAddress(hModule,"hb_font_get_face");
                                          _Dst[0x11] = pFVar2;
                                          if (pFVar2 != (FARPROC)0x0) {
                                            pFVar2 = GetProcAddress(hModule,"hb_font_set_scale");
                                            _Dst[0x12] = pFVar2;
                                            if (pFVar2 != (FARPROC)0x0) {
                                              pFVar2 = GetProcAddress(hModule,
                                                  "hb_ot_layout_collect_lookups");
                                              _Dst[0x13] = pFVar2;
                                              if (pFVar2 != (FARPROC)0x0) {
                                                pFVar2 = GetProcAddress(hModule,
                                                  "hb_ot_layout_lookup_collect_glyphs");
                                                _Dst[0x14] = pFVar2;
                                                if (pFVar2 != (FARPROC)0x0) {
                                                  pFVar2 = GetProcAddress(hModule,
                                                  "hb_ot_layout_lookup_would_substitute");
                                                  _Dst[0x15] = pFVar2;
                                                  if (pFVar2 != (FARPROC)0x0) {
                                                    pFVar2 = GetProcAddress(hModule,
                                                  "hb_ot_tags_from_script_and_language");
                                                  _Dst[0x16] = pFVar2;
                                                  if (pFVar2 != (FARPROC)0x0) {
                                                    pFVar2 = GetProcAddress(hModule,"hb_set_add");
                                                    _Dst[0x17] = pFVar2;
                                                    if (pFVar2 != (FARPROC)0x0) {
                                                      pFVar2 = GetProcAddress(hModule,"hb_set_clear"
                                                                             );
                                                      _Dst[0x18] = pFVar2;
                                                      if (pFVar2 != (FARPROC)0x0) {
                                                        pFVar2 = GetProcAddress(hModule,
                                                  "hb_set_create");
                                                  _Dst[0x19] = pFVar2;
                                                  if (pFVar2 != (FARPROC)0x0) {
                                                    pFVar2 = GetProcAddress(hModule,"hb_set_destroy"
                                                                           );
                                                    _Dst[0x1a] = pFVar2;
                                                    if (pFVar2 != (FARPROC)0x0) {
                                                      pFVar2 = GetProcAddress(hModule,"hb_set_del");
                                                      _Dst[0x1b] = pFVar2;
                                                      if (pFVar2 != (FARPROC)0x0) {
                                                        pFVar2 = GetProcAddress(hModule,"hb_set_has"
                                                                               );
                                                        _Dst[0x1c] = pFVar2;
                                                        if (pFVar2 != (FARPROC)0x0) {
                                                          pFVar2 = GetProcAddress(hModule,
                                                  "hb_set_is_empty");
                                                  _Dst[0x1d] = pFVar2;
                                                  if (pFVar2 != (FARPROC)0x0) {
                                                    pFVar2 = GetProcAddress(hModule,"hb_set_next");
                                                    _Dst[0x1e] = pFVar2;
                                                    if (pFVar2 != (FARPROC)0x0) {
                                                      pFVar2 = GetProcAddress(hModule,
                                                  "hb_set_subtract");
                                                  _Dst[0x1f] = pFVar2;
                                                  if (pFVar2 != (FARPROC)0x0) {
                                                    pFVar2 = GetProcAddress(hModule,"hb_shape");
                                                    _Dst[0x20] = pFVar2;
                                                    if (pFVar2 != (FARPROC)0x0) {
                                                      pFVar2 = GetProcAddress(hModule,
                                                  "hb_version_atleast");
                                                  _Dst[0x21] = pFVar2;
                                                  if (pFVar2 != (FARPROC)0x0) {
                                                    *(undefined4 **)(param_1 + 0x38) = _Dst;
                                                    goto LAB_00438836;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_0041c607(iVar1,(int)_Dst);
  }
LAB_00438836:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_18);
}

